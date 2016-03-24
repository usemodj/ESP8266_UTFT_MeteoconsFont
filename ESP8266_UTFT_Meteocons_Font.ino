/**The MIT License (MIT)

Copyright (c) 2016 by Seokjin Seo

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

See more at http://usemodj.com

 Required libraries:
  - XPT2046: https://github.com/spapadim/XPT2046
  - UTFT-ESP8266: https://github.com/gnulabis/UTFT-ESP8266

 Modify: XPT2046.cpp
 void XPT2046::begin(uint16_t width, uint16_t height) { 
   ...
   //SPI.begin(); //comment out
   ...
 }  
*/

#include <Arduino.h>
#include <UTFT.h>
#include <SPI.h>
#include <XPT2046.h>
//#include "Meteocons_32.h"

#define ESP_SPI_FREQ 4000000

// Modify the following two lines to match your hardware
// Also, update calibration parameters below, as necessary

// Modify the line below to match your display and wiring:
//UTFT(byte model, int CS, int RST, int SER=0);
UTFT myGLCD ( ILI9341_S5P, 15, 5, 2);

XPT2046 myTouch(/*cs=*/ 4, /*irq=*/ 5);

// Declare which fonts we will be using
extern uint8_t BigFont[];
extern uint8_t Meteocons_32[];
extern uint8_t Meteocons_24[];

uint8_t *pMeteoconsFont = Meteocons_32;
char stCurrent[20]="";
int stCurrentLen=0;
char stLast[20]="";

/*************************
**   Custom functions   **
*************************/

void drawButtons()
{
  int x, y;
// Draw the upper row of buttons
  for (x=0; x<5; x++)
  {
    myGLCD.setColor(0, 0, 255);
    myGLCD.fillRoundRect (10+(x*60), 10, 60+(x*60), 60);
    myGLCD.setColor(255, 255, 255);
    myGLCD.drawRoundRect (10+(x*60), 10, 60+(x*60), 60);
    myGLCD.printNumI(x+1, 20+(x*60), 20);
  }

// Draw the center row of buttons
  for (x=0; x<5; x++)
  {
    myGLCD.setColor(0, 0, 255);
    myGLCD.fillRoundRect (10+(x*60), 70, 60+(x*60), 120);
    myGLCD.setColor(255, 255, 255);
    myGLCD.drawRoundRect (10+(x*60), 70, 60+(x*60), 120);
    if (x == 4){
      myGLCD.print("0", 20+(x*60), 80);
    } else {
      myGLCD.printNumI(x+6, 20+(x*60), 80);
    }
  }
  //myGLCD.print("0", 267, 87);

// Draw the lower row of buttons
  myGLCD.setFont(BigFont);
  myGLCD.setColor(0, 0, 255);
  myGLCD.fillRoundRect (10, 130, 150, 180);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (10, 130, 150, 180);
  myGLCD.print("Clear", 40, 147);
  myGLCD.setColor(0, 0, 255);
  myGLCD.fillRoundRect (160, 130, 300, 180);
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (160, 130, 300, 180);
  myGLCD.print("Enter", 190, 147);
  myGLCD.setBackColor (0, 0, 0);
}

void updateStr(int val)
{
  if (stCurrentLen<20)
  {
    myGLCD.setFont(pMeteoconsFont);
    stCurrent[stCurrentLen]=val;
    stCurrent[stCurrentLen+1]='\0';
    stCurrentLen++;
    myGLCD.setColor(0, 255, 0);
    myGLCD.print(stCurrent, LEFT, 200);
  }
  else
  {
    myGLCD.setFont(BigFont);
    myGLCD.setColor(255, 0, 0);
    myGLCD.print("BUFFER FULL!", CENTER, 192);
    delay(500);
    myGLCD.print("            ", CENTER, 192);
    delay(500);
    myGLCD.print("BUFFER FULL!", CENTER, 192);
    delay(500);
    myGLCD.print("            ", CENTER, 192);
    myGLCD.setColor(0, 255, 0);
  }
  Serial.println("drawed buttons");
}

// Draw a red frame while a button is touched
void waitForIt(int x1, int y1, int x2, int y2)
{
  myGLCD.setColor(255, 0, 0);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
  while (myTouch.isTouching()) yield(); //loop
  myGLCD.setColor(255, 255, 255);
  myGLCD.drawRoundRect (x1, y1, x2, y2);
}

/*************************
**  Required functions  **
*************************/

void setup()
{
  delay(1000);
  
  Serial.begin(115200);
  SPI.setFrequency(ESP_SPI_FREQ);

// Initial setup
  myGLCD.InitLCD(LANDSCAPE); //LANDSCAPE, PORTRAIT
  myGLCD.clrScr();
  Serial.print("tftx ="); Serial.print(myGLCD.getDisplayXSize()); Serial.print(" tfty ="); Serial.println(myGLCD.getDisplayYSize());
  //begin(uint16_t width, uint16_t height);  // width and height with no rotation!
  //myTouch.begin(240, 320);  // Must be done before setting rotation
  myTouch.begin((uint16_t)myGLCD.getDisplayYSize(), (uint16_t)myGLCD.getDisplayXSize());  // Must be done before setting rotation
  // Replace these for your screen module
  //myTouch.setCalibration(209, 1759, 1775, 273);
  myTouch.setCalibration(224, 1744, 1750, 272);
  myTouch.setRotation(myTouch.ROT270);

  //myGLCD.setFont(BigFont); 
  //myGLCD.setFont(Meteocons_32); 
  myGLCD.setFont(pMeteoconsFont); 
  myGLCD.setBackColor(0, 0, 255);
  drawButtons();
}

void loop()
{
  uint16_t x, y;
  if (myTouch.isTouching())
  {
    myTouch.getPosition(x, y);
    //Serial.println("Touching... x: "+ String(x) + ", y: " + String(y));
    
    if ((y>=10) && (y<=60))  // Upper row
    {
      if ((x>=10) && (x<=60))  // Button: 1
      {
        waitForIt(10, 10, 60, 60);
        updateStr('1');
      }
      if ((x>=70) && (x<=120))  // Button: 2
      {
        waitForIt(70, 10, 120, 60);
        updateStr('2');
      }
      if ((x>=130) && (x<=180))  // Button: 3
      {
        waitForIt(130, 10, 180, 60);
        updateStr('3');
      }
      if ((x>=190) && (x<=240))  // Button: 4
      {
        waitForIt(190, 10, 240, 60);
        updateStr('4');
      }
      if ((x>=250) && (x<=300))  // Button: 5
      {
        waitForIt(250, 10, 300, 60);
        updateStr('5');
      }
    }

    if ((y>=70) && (y<=120))  // Center row
    {
      if ((x>=10) && (x<=60))  // Button: 6
      {
        waitForIt(10, 70, 60, 120);
        updateStr('6');
      }
      if ((x>=70) && (x<=120))  // Button: 7
      {
        waitForIt(70, 70, 120, 120);
        updateStr('7');
      }
      if ((x>=130) && (x<=180))  // Button: 8
      {
        waitForIt(130, 70, 180, 120);
        updateStr('8');
      }
      if ((x>=190) && (x<=240))  // Button: 9
      {
        waitForIt(190, 70, 240, 120);
        updateStr('9');
      }
      if ((x>=250) && (x<=300))  // Button: 0
      {
        waitForIt(250, 70, 300, 120);
        updateStr('0');
      }
    }

    if ((y>=130) && (y<=180))  // Upper row
    {
      if ((x>=10) && (x<=150))  // Button: Clear
      {
        waitForIt(10, 130, 150, 180);
        stCurrent[0]='\0';
        stCurrentLen=0;
        myGLCD.setColor(0, 0, 0);
        myGLCD.fillRect(0, 224, 319, 239);
      }
      if ((x>=160) && (x<=300))  // Button: Enter
      {
        waitForIt(160, 130, 300, 180);
        if (stCurrentLen>0)
        {
          myGLCD.setFont(pMeteoconsFont);
          for (x=0; x<stCurrentLen+1; x++)
          {
            stLast[x]=stCurrent[x];
          }
          stCurrent[0]='\0';
          stCurrentLen=0;
          myGLCD.setColor(0, 0, 0);
          myGLCD.fillRect(0, 208, 319, 239);
          myGLCD.setColor(0, 255, 0);
          myGLCD.print(stLast, LEFT, 180);
        }
        else
        {
          myGLCD.setFont(BigFont);
          myGLCD.setColor(255, 0, 0);
          myGLCD.print("BUFFER EMPTY", CENTER, 192);
          delay(500);
          myGLCD.print("            ", CENTER, 192);
          delay(500);
          myGLCD.print("BUFFER EMPTY", CENTER, 192);
          delay(500);
          myGLCD.print("            ", CENTER, 192);
          myGLCD.setColor(0, 255, 0);
        }
      }
    }
  }

  yield();
}

