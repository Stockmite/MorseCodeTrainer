#include <stdio.h>
#include <ctype.h>

typedef unsigned short SHORT;

SHORT CreateVal(int code, int len) {

    SHORT Val = (SHORT)len;
    return (Val << 8) | (SHORT)code;

}

short int GetMorse(char c) {
    char lowerC = tolower(c);

    switch (lowerC) {
        case 'a':
            return CreateVal(1, 2);
        case 'b':
            return CreateVal(8, 4);
        case 'c':
            return CreateVal(10, 4);
        case 'd':
            return CreateVal(4, 3);
        case 'e':
            return CreateVal(0, 1);
        case 'f':
            return CreateVal(2, 4);
        case 'g':
            return CreateVal(6, 3);
        case 'h':
            return CreateVal(0, 4);
        case 'i':
            return CreateVal(0, 2);
        case 'j':
            return CreateVal(7, 4);
        case 'k':
            return CreateVal(5, 3);
        case 'l':
            return CreateVal(4, 4);
        case 'm':
            return CreateVal(3, 2);
        case 'n':
            return CreateVal(2, 2);
        case 'o':
            return CreateVal(7, 3);
        case 'p':
            return CreateVal(6, 4);
        case 'q':
            return CreateVal(13, 4);
        case 'r':
            return CreateVal(2, 3);
        case 's':
            return CreateVal(0, 3);
        case 't':
            return CreateVal(1, 1);
        case 'u':
            return CreateVal(1, 3);
        case 'v':
            return CreateVal(1, 4);
        case 'w':
            return CreateVal(3, 3);
        case 'x':
            return CreateVal(9, 4);
        case 'y':
            return CreateVal(11, 4);
        case 'z':
            return CreateVal(12, 4);
        case '0':
            return CreateVal(31, 5);
        case '1':
            return CreateVal(15, 5);
        case '2':
            return CreateVal(7, 5);
        case '3':
            return CreateVal(3, 5);
        case '4':
            return CreateVal(1, 5);
        case '5':
            return CreateVal(0, 5);
        case '6':
            return CreateVal(16, 5);
        case '7':
            return CreateVal(24, 5);
        case '8':
            return CreateVal(28, 5);
        case '9':
            return CreateVal(30, 5);
    }


}