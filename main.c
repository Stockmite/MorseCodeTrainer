#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#include "morsetranslation.h"

int main() {

    char response = 'a';
    
    while (true) {

        srand(time(NULL));
        int ind = rand() % 36;

        PrintMorse(alphabet[ind]);

        scanf("%c", &response);

        if (response == alphabet[ind]) {
            printf("CORRECT! :D \n");
        } else {
            printf("Incorrect D:  the answer is %c \n", toupper(alphabet[ind]));
        }

        fflush(stdin);
    }

}