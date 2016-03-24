
Github Code: [https://github.com/usemodj/ESP8266_UTFT_MeteoconsFont](https://github.com/usemodj/ESP8266_UTFT_MeteoconsFont)

## Make Meteocons font file for ESP8266 Arduino UTFT library

- Download and install Meteocons truetype font(*.ttf):
  [http://www.alessioatzeni.com/meteocons/](http://www.alessioatzeni.com/meteocons/)

- Download and install BMFont.exe (Bitmap Font Generator):
  [http://www.angelcode.com/products/bmfont/](http://www.angelcode.com/products/bmfont/)


First, Generate Bitmap font file(Meteocons_32.png) from Meteocons.ttf file using BMFont.exe

1. Run BMFont.exe and open Menu Options/Load Configuration: 
     Meteocons32/Configuration32.bmfc
2. Open Menu Options/Save bitmap font as... and save to:
     Meteocons
   then, Meteocons_0.png generated.
3. Rename Meteocons_0.png to Meteocons_32.png


Second, Convert bitmap images into the font formats required for my UTFT libraries for Arduino

1. Open Web browser and connect to UTFT/Font Maker [http://www.rinkydinkelectronics.com/t_make_font_file.php](http://www.rinkydinkelectronics.com/t_make_font_file.php)
2. Select File: Meteocons32/Meteocons_32.png, Font Type: Full Font(95 characters)
   and click the button of 'Make File' then, download link generated.
3. Download the link file and save to Meteocons_32.c

Third, Modify Meteocons_32.c

```
// Meteocons_32.c
// Font type    : Full (95 characters)
// Font size    : 32x40 pixels
// Memory usage : 15204 bytes

#if defined(__AVR__)
    #include <avr/pgmspace.h>
    #define fontdatatype const uint8_t
#elif defined(__PIC32MX__)
    #define PROGMEM
    #define fontdatatype const unsigned char
#elif defined(__arm__)
    #define PROGMEM
    #define fontdatatype const unsigned char
#elif defined(ESP8266)
    #include <pgmspace.h>
    #define fontdatatype const uint8_t
#endif

fontdatatype Meteocons_32[15204] PROGMEM={
 ...

```

See more at www.usemodj.com
