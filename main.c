#include "hashes.h"
#include <stdio.h>


int main() {
    do {
        int userNum = get_int("Digite um numero inteiro entre 1 e 8: ");
        
        if (userNum > 0 && userNum < 9) {
            skipNextLine();
            hashesFactory(userNum);
            skipNextLine();
            triangleFactory(userNum);
            skipNextLine();
            triangleSpacesFactory(userNum);
            skipNextLine();
            break;
        } else {
            printf("Por favor, digite um numero entre 1 e 8.\n");
        }
    } while (1);
    
    return 0;
}
