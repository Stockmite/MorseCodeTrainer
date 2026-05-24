#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#include "morsetranslation.h"

#define alphabetlen 36

int main() {

    char response = 'a';
    
    while (true) {

        srand(time(NULL));
        int ind = rand() % alphabetlen;
        char letter = toupper(alphabet[ind]);

        char filename[17];
        sprintf(filename, "audiofiles/%c.wav", letter);
        PlaySound(filename, NULL, SND_FILENAME);

        scanf("%c", &response);

        if (toupper(response) == letter) {
            printf("CORRECT! :D \n");
        } else {
            printf("Incorrect D:  the answer is %c \n", letter);
        }

        fflush(stdin);
    }

}