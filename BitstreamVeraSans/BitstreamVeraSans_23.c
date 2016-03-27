// BitstreamVeraSans_23.c
// Font type    : Full (95 characters)
// Font size    : 16x32 pixels
// Memory usage : 6084 bytes

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

fontdatatype BitstreamVeraSans_23[6084] PROGMEM={
0x10,0x20,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x01,0x80,0x01,0x80,0x01,0x80,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // !
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0xE0,0x0E,0xE0,0x0E,0xE0,0x0E,0xE0,0x0E,0xE0,0x0E,0xE0,0x0E,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x9C,0x03,0x9C,0x03,0xB8,0x07,0xB8,0x07,0x38,0x3F,0xFE,0x3F,0xFE,0x3F,0xFE,0x0E,0x70,0x0E,0xF0,0x7F,0xFC,0x7F,0xFC,0x7F,0xFC,0x1C,0xE0,0x1D,0xC0,0x39,0xC0,0x39,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // #
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x01,0x80,0x01,0x80,0x0F,0xF8,0x1F,0xF8,0x1F,0xF8,0x3D,0x88,0x3D,0x80,0x1D,0x80,0x1F,0xE0,0x0F,0xF8,0x03,0xFC,0x01,0xBC,0x01,0x9C,0x01,0x9C,0x3F,0xFC,0x3F,0xFC,0x3F,0xF8,0x01,0x80,0x01,0x80,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // $
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x00,0x7F,0x00,0x7F,0x00,0x77,0x00,0x7F,0x0C,0x7F,0x3C,0x7E,0xF8,0x1D,0xF0,0x07,0xC0,0x1F,0x00,0x3E,0xF8,0x79,0xFC,0x23,0xFC,0x03,0xDC,0x03,0xFC,0x01,0xFC,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // %
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x0F,0xE0,0x1F,0xE0,0x1E,0x20,0x1E,0x00,0x0E,0x00,0x0F,0x00,0x1F,0x80,0x3F,0xCE,0x3B,0xCE,0x79,0xEE,0x78,0xFE,0x78,0x7E,0x3C,0x7C,0x3F,0xFC,0x1F,0xFE,0x0F,0xEE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // &
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,0x01,0xC0,0x01,0xC0,0x03,0xC0,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x07,0x00,0x07,0x00,0x07,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0xC0,0x01,0xC0,0x01,0xC0,0x00,0xE0,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // (
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x07,0x00,0x07,0x80,0x03,0x80,0x03,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x03,0xC0,0x03,0x80,0x07,0x80,0x07,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // )
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x1B,0x70,0x3F,0xF0,0x0F,0xE0,0x0F,0xC0,0x1F,0xF0,0x3F,0x70,0x13,0x10,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // *
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x7F,0xFC,0x7F,0xFC,0x7F,0xFC,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0xC0,0x03,0x80,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x0F,0xE0,0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x07,0x80,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // .
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x70,0x00,0x70,0x00,0xF0,0x00,0xE0,0x01,0xE0,0x01,0xC0,0x03,0xC0,0x03,0x80,0x07,0x80,0x07,0x00,0x0F,0x00,0x0E,0x00,0x1E,0x00,0x1C,0x00,0x3C,0x00,0x38,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // /

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x1F,0xF0,0x3F,0xF0,0x3C,0x78,0x38,0x38,0x38,0x38,0x78,0x38,0x70,0x38,0x77,0xB8,0x77,0xB8,0x7B,0x38,0x38,0x38,0x38,0x38,0x3C,0x78,0x3E,0xF8,0x1F,0xF0,0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 0
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x1F,0xC0,0x1F,0xC0,0x19,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x1F,0xFC,0x1F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 1
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x3F,0xF8,0x3F,0xFC,0x30,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x3C,0x00,0x7C,0x00,0xF8,0x01,0xF0,0x03,0xE0,0x07,0xC0,0x0F,0x80,0x1E,0x00,0x3F,0xFE,0x3F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 2
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x3F,0xF8,0x3F,0xF8,0x30,0x38,0x00,0x38,0x00,0x38,0x00,0xF8,0x0F,0xF0,0x0F,0xF0,0x0F,0xF8,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x7D,0xF8,0x7F,0xF8,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 3
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0xF0,0x01,0xF0,0x03,0xF0,0x07,0xF0,0x07,0x70,0x0E,0x70,0x1E,0x70,0x1C,0x70,0x3C,0x70,0x78,0x70,0x7F,0xFC,0x7F,0xFC,0x7F,0xFC,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 4
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x3F,0xF0,0x3F,0xF0,0x38,0x00,0x38,0x00,0x38,0x00,0x3F,0xE0,0x3F,0xF0,0x3F,0xF8,0x30,0x78,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x78,0x7D,0xF8,0x7F,0xF0,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 5
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x1F,0xF0,0x1F,0xF0,0x3C,0x10,0x38,0x00,0x38,0x00,0x3F,0xE0,0x7F,0xF0,0x7F,0xF8,0x78,0x38,0x78,0x38,0x30,0x38,0x38,0x38,0x38,0x38,0x3E,0xF8,0x1F,0xF8,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 6
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x7F,0xF8,0x7F,0xF8,0x00,0x78,0x00,0x70,0x00,0xF0,0x00,0xE0,0x01,0xE0,0x01,0xC0,0x03,0xC0,0x03,0xC0,0x03,0x80,0x07,0x80,0x07,0x00,0x0F,0x00,0x0E,0x00,0x1E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 7
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x3F,0xF8,0x3F,0xF8,0x78,0x38,0x70,0x38,0x38,0x38,0x3E,0xF8,0x1F,0xF0,0x1F,0xF0,0x3F,0xF8,0x38,0x38,0x78,0x38,0x78,0x38,0x78,0x38,0x3E,0xF8,0x3F,0xF8,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 8
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x3F,0xF0,0x3F,0xF8,0x38,0x38,0x78,0x38,0x70,0x38,0x78,0x38,0x38,0x38,0x3E,0xF8,0x3F,0xF8,0x1F,0xF8,0x03,0x38,0x00,0x38,0x00,0x78,0x3D,0xF0,0x3F,0xF0,0x3F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x07,0x80,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x80,0x07,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ;
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0xFC,0x03,0xFC,0x1F,0xF0,0x7F,0x80,0x7C,0x00,0x7F,0x80,0x1F,0xE0,0x03,0xFC,0x00,0xFC,0x00,0x1C,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x7F,0xFC,0x7F,0xFC,0x00,0x00,0x00,0x00,0x7F,0xFC,0x7F,0xFC,0x7F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // =
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x7E,0x00,0x7F,0xC0,0x0F,0xF8,0x01,0xFC,0x00,0x3C,0x01,0xFC,0x0F,0xF8,0x3F,0xC0,0x7F,0x00,0x78,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // >
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x1F,0xF0,0x3F,0xF0,0x38,0x70,0x30,0x70,0x00,0xF0,0x01,0xF0,0x03,0xE0,0x03,0xC0,0x07,0x80,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ?

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF8,0x0F,0xFC,0x1F,0xFE,0x1E,0x1E,0x3C,0x0E,0x38,0xFE,0x39,0xFE,0x39,0xFE,0x79,0xCE,0x73,0xCE,0x73,0xCE,0x7B,0xCE,0x39,0xFE,0x39,0xFE,0x3C,0xFE,0x3C,0x7E,0x1F,0x00,0x0F,0xF8,0x0F,0xF8,0x03,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // @
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x07,0xC0,0x07,0xC0,0x07,0xC0,0x07,0xC0,0x0F,0xE0,0x0E,0xE0,0x0E,0xE0,0x0E,0xE0,0x1E,0xF0,0x1C,0x70,0x1F,0xF0,0x3F,0xF0,0x3F,0xF8,0x38,0x38,0x38,0x38,0x78,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // A
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x7F,0xF0,0x7F,0xF0,0x70,0x70,0x70,0x70,0x70,0x70,0x71,0xF0,0x7F,0xF0,0x7F,0xF0,0x7F,0xF8,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0xF8,0x7F,0xF8,0x7F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // B
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF8,0x0F,0xF8,0x1F,0xF8,0x3C,0x08,0x38,0x00,0x38,0x00,0x38,0x00,0x78,0x00,0x70,0x00,0x78,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x3C,0x00,0x1F,0x78,0x1F,0xF8,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // C
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x7F,0xE0,0x7F,0xF0,0x70,0x78,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x78,0x73,0xF0,0x7F,0xF0,0x7F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // D
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x7F,0xF8,0x7F,0xF8,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x7F,0xF0,0x7F,0xF0,0x7F,0xF0,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x7F,0xF8,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // E
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x7F,0xF8,0x7F,0xF8,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x7F,0xF0,0x7F,0xF0,0x7F,0xF0,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // F
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x1F,0xF0,0x1F,0xF0,0x3C,0x10,0x38,0x00,0x38,0x00,0x38,0x00,0x78,0x00,0x70,0xF8,0x70,0xF8,0x78,0xF8,0x38,0x38,0x38,0x38,0x3C,0x38,0x1F,0x78,0x1F,0xF8,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // G
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x7F,0xF8,0x7F,0xF8,0x7F,0xF8,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // H
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x3F,0xF8,0x3F,0xF8,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // I
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x07,0xF0,0x07,0xF0,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x70,0x70,0x7D,0xF0,0x7F,0xF0,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // J
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x3C,0x70,0x78,0x70,0xF0,0x71,0xE0,0x73,0xC0,0x77,0xC0,0x7F,0x80,0x7F,0x00,0x7F,0x80,0x7F,0xC0,0x7B,0xC0,0x71,0xE0,0x70,0xF0,0x70,0xF0,0x70,0x78,0x70,0x3C,0x70,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // K
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x7F,0xF8,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // L
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x78,0x7C,0x78,0x7C,0x78,0x7C,0xF8,0x7E,0xF8,0x7E,0xF8,0x77,0xF8,0x77,0xF8,0x77,0xF8,0x77,0xB8,0x73,0xB8,0x73,0xB8,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // M
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x38,0x7C,0x38,0x7C,0x38,0x7E,0x38,0x7E,0x38,0x7F,0x38,0x77,0x38,0x77,0xB8,0x73,0xB8,0x73,0xF8,0x71,0xF8,0x71,0xF8,0x70,0xF8,0x70,0xF8,0x70,0xF8,0x70,0x78,0x70,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // N
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x1F,0xF0,0x3F,0xF8,0x3C,0x78,0x38,0x38,0x38,0x38,0x78,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x78,0x38,0x38,0x38,0x38,0x38,0x3C,0x78,0x3E,0xF8,0x1F,0xF0,0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // O

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x7F,0xF8,0x7F,0xF8,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0xF8,0x7F,0xF8,0x7F,0xF0,0x7F,0x80,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // P
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x1F,0xF0,0x3F,0xF8,0x3C,0x78,0x38,0x38,0x38,0x38,0x78,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x78,0x38,0x38,0x38,0x38,0x38,0x3C,0x78,0x3E,0xF8,0x1F,0xF0,0x0F,0xE0,0x00,0xF0,0x00,0x78,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // Q
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xE0,0x7F,0xF8,0x7F,0xF8,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0xF8,0x7F,0xF0,0x7F,0xF0,0x7F,0xF0,0x70,0x78,0x70,0x38,0x70,0x3C,0x70,0x1C,0x70,0x1E,0x70,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // R
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF0,0x3F,0xF0,0x3F,0xF0,0x38,0x10,0x78,0x00,0x78,0x00,0x3C,0x00,0x3F,0xC0,0x1F,0xF0,0x07,0xF8,0x00,0xF8,0x00,0x38,0x00,0x38,0x00,0x38,0x7C,0xF8,0x7F,0xF8,0x7F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // S
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xFC,0x7F,0xFC,0x7F,0xFC,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // T
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x70,0x38,0x78,0x38,0x38,0x38,0x3E,0xF8,0x3F,0xF8,0x1F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // U
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x38,0x38,0x38,0x38,0x38,0x3C,0x78,0x3C,0x70,0x1C,0x70,0x1C,0x70,0x1E,0xF0,0x1E,0xE0,0x0E,0xE0,0x0E,0xE0,0x0F,0xE0,0x0F,0xC0,0x07,0xC0,0x07,0xC0,0x07,0xC0,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // V
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x73,0xCE,0x73,0xDE,0x3B,0xDC,0x3F,0xFC,0x3F,0xFC,0x3F,0xFC,0x3F,0xFC,0x3E,0x7C,0x3E,0x7C,0x1E,0x78,0x1E,0x78,0x1C,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // W
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x38,0x3C,0x78,0x1C,0x70,0x1E,0xF0,0x0F,0xE0,0x0F,0xE0,0x07,0xC0,0x07,0x80,0x07,0x80,0x07,0xC0,0x0F,0xC0,0x0F,0xE0,0x1E,0xE0,0x1E,0xF0,0x3C,0x70,0x3C,0x78,0x78,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // X
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x1C,0x3C,0x3C,0x1C,0x38,0x1E,0x78,0x0E,0x70,0x0F,0xF0,0x07,0xE0,0x07,0xE0,0x03,0xC0,0x03,0xC0,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // Y
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x7F,0xF8,0x7F,0xF8,0x00,0x78,0x00,0xF0,0x01,0xE0,0x01,0xE0,0x03,0xC0,0x03,0x80,0x07,0x80,0x0F,0x00,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x3C,0x00,0x7F,0xF8,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // Z
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x07,0xE0,0x07,0xE0,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0xE0,0x07,0xE0,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // [
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x38,0x00,0x3C,0x00,0x1C,0x00,0x1E,0x00,0x0E,0x00,0x0F,0x00,0x07,0x00,0x07,0x80,0x03,0x80,0x03,0xC0,0x01,0xC0,0x01,0xE0,0x00,0xE0,0x00,0xF0,0x00,0x70,0x00,0x70,0x00,0x38,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <backslash>
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x0F,0xC0,0x0F,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x0F,0xC0,0x0F,0xC0,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ]
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x07,0xE0,0x0F,0xF0,0x1E,0x78,0x3C,0x38,0x38,0x3C,0x70,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x7F,0xF8,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,  // _

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x00,0x0F,0x00,0x07,0x80,0x03,0x80,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x1F,0xFC,0x1F,0xFC,0x18,0x1C,0x00,0x1C,0x0F,0xFC,0x1F,0xFC,0x1F,0xFC,0x3C,0x1C,0x3C,0x3C,0x1E,0xFC,0x1F,0xFC,0x0F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // a
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x3F,0xF0,0x3F,0xF8,0x3F,0xFC,0x3C,0x3C,0x3C,0x1C,0x3C,0x1C,0x38,0x1C,0x3C,0x1C,0x3C,0x1C,0x3C,0x1C,0x3F,0x7C,0x3F,0xF8,0x3F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF8,0x0F,0xF8,0x1F,0xF8,0x1E,0x08,0x1C,0x00,0x3C,0x00,0x38,0x00,0x3C,0x00,0x1C,0x00,0x1E,0x00,0x1F,0xB8,0x0F,0xF8,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // c
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x07,0xFC,0x0F,0xFC,0x1F,0xFC,0x1C,0x3C,0x1C,0x1C,0x3C,0x1C,0x38,0x1C,0x3C,0x1C,0x1C,0x1C,0x1C,0x3C,0x1F,0x7C,0x0F,0xFC,0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x0F,0xF8,0x1F,0xFC,0x1C,0x1C,0x1C,0x1C,0x3F,0xFC,0x3F,0xFC,0x3F,0xFC,0x1C,0x00,0x1C,0x00,0x1F,0xBC,0x0F,0xFC,0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // e
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x01,0xF8,0x03,0xF8,0x03,0x80,0x1F,0xF8,0x1F,0xF8,0x1F,0xF8,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // f
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFC,0x0F,0xFC,0x1F,0xFC,0x1E,0x3C,0x1C,0x1C,0x3C,0x1C,0x38,0x1C,0x3C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1F,0x7C,0x0F,0xFC,0x07,0xFC,0x00,0x1C,0x18,0x1C,0x1F,0xFC,0x1F,0xF8,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,  // g
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x3B,0xF8,0x3F,0xFC,0x3F,0xFC,0x3C,0x1C,0x3C,0x1C,0x3C,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // h
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x1F,0x80,0x1F,0x80,0x1F,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x3F,0xF8,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // i
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x1F,0xC0,0x1F,0xC0,0x1F,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x01,0xC0,0x3F,0xC0,0x3F,0xC0,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,  // j
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x7C,0x38,0xF8,0x39,0xF0,0x3B,0xE0,0x3F,0xC0,0x3F,0x80,0x3F,0xC0,0x3F,0xE0,0x3D,0xE0,0x38,0xF0,0x38,0x78,0x38,0x3C,0x38,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // k
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x7F,0x00,0x7F,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x80,0x03,0xC0,0x03,0xF0,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // l
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFE,0x3F,0xFE,0x3F,0xFE,0x3D,0xEE,0x3D,0xEE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x39,0xCE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // m
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3B,0xF8,0x3F,0xFC,0x3F,0xFC,0x3C,0x1C,0x3C,0x1C,0x3C,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xF0,0x0F,0xF8,0x1F,0xFC,0x1C,0x3C,0x1C,0x1C,0x3C,0x1C,0x38,0x1C,0x3C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1F,0x7C,0x0F,0xF8,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // o

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x3F,0xF8,0x3F,0xFC,0x3C,0x3C,0x3C,0x1C,0x3C,0x1C,0x38,0x1C,0x3C,0x1C,0x3C,0x1C,0x3C,0x1C,0x3F,0x7C,0x3F,0xF8,0x3F,0xF0,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // p
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFC,0x0F,0xFC,0x1F,0xFC,0x1C,0x3C,0x1C,0x1C,0x3C,0x1C,0x38,0x1C,0x3C,0x1C,0x1C,0x1C,0x1C,0x3C,0x1F,0x7C,0x0F,0xFC,0x07,0xFC,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,  // q
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0xFC,0x0F,0xFC,0x0F,0xFC,0x0F,0x84,0x0F,0x00,0x0F,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x1F,0xF8,0x1F,0xF8,0x3C,0x08,0x3E,0x00,0x1F,0xF0,0x1F,0xFC,0x03,0xFC,0x00,0x3C,0x00,0x1C,0x3F,0x7C,0x3F,0xFC,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // s
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x3F,0xF8,0x3F,0xF8,0x3F,0xF8,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x00,0x07,0x80,0x03,0xC0,0x03,0xF8,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // t
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x38,0x1C,0x3C,0x1C,0x1C,0x1C,0x1F,0xFC,0x1F,0xFC,0x0F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // u
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x1C,0x1C,0x1C,0x1C,0x3C,0x1E,0x38,0x0E,0x38,0x0E,0x78,0x0F,0x70,0x07,0x70,0x07,0xF0,0x07,0xE0,0x03,0xE0,0x03,0xE0,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // v
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x7B,0xDE,0x3B,0xDC,0x3B,0xDC,0x3F,0xDC,0x3F,0xFC,0x1F,0xF8,0x1E,0x78,0x1E,0x78,0x1E,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // w
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3C,0x1E,0x3C,0x0F,0x78,0x07,0xF0,0x07,0xF0,0x03,0xE0,0x03,0xC0,0x03,0xE0,0x07,0xF0,0x0F,0x70,0x0F,0x78,0x1E,0x3C,0x3C,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // x
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x1C,0x1C,0x1C,0x1E,0x3C,0x0E,0x38,0x0E,0x38,0x0F,0x78,0x07,0x70,0x07,0xF0,0x07,0xF0,0x03,0xE0,0x03,0xE0,0x01,0xE0,0x01,0xC0,0x01,0xC0,0x03,0xC0,0x1F,0x80,0x1F,0x80,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // y
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFC,0x3F,0xFC,0x3F,0xFC,0x00,0x78,0x00,0xF8,0x01,0xF0,0x03,0xE0,0x07,0xC0,0x0F,0x80,0x0F,0x00,0x1E,0x00,0x3F,0xFC,0x3F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // z
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x03,0xC0,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x07,0x80,0x1F,0x80,0x1F,0x80,0x1F,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0xC0,0x01,0xF0,0x01,0xF0,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,  // |
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x1F,0x80,0x1F,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0xC0,0x01,0xF0,0x01,0xF8,0x01,0xF8,0x01,0xF8,0x03,0xC0,0x03,0xC0,0x03,0x80,0x03,0x80,0x03,0x80,0x03,0x80,0x1F,0x80,0x1F,0x80,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // }
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xDC,0x7F,0xFC,0x7F,0xFC,0x60,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ~
};
