#ifndef ntype_h
#define ntype_h

    #define TRUE 1
    #define FALSE 0
        
    #define TXDATA __xdata
    #define TCODE __rom

    #define ENABLE_INTERRUPTS() EA = TRUE
    #define DISABLE_INTERRUPTS() EA = FALSE

    #define WORD unsigned short
    #define BYTE unsigned char
    #define word unsigned short
    #define byte unsigned char


#endif
