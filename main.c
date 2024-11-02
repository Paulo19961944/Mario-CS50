#include "hashes.h"
#include <stdio.h>


int main() {
    do {
        int userNum = get_int("Digite um numero inteiro entre 1 e 8: ");
        
        if (userNum > 0 && userNum < 9) {
            printf("\n");
            hashesFactory(userNum);
            break;
        } else {
            printf("Por favor, digite um numero entre 1 e 8.\n");
        }
    } while (1);
    
    return 0;
}
