#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include "hashes.h"

// CAPTURA UM INT E FAZ O TRATAMENTO
int get_int(const char *mensagem) {
    char buffer[20];
    long numero;

    while (1) {
        printf("%s", mensagem);
        fgets(buffer, sizeof(buffer), stdin);
        char *endptr;
        numero = strtol(buffer, &endptr, 10);

        if (endptr == buffer || *endptr != '\n') {
            printf("Tipo incorreto! Você deve digitar um número inteiro.\n");
        } else if (numero > INT_MAX || numero < INT_MIN) {
            printf("Você ultrapassou o limite de caracteres do tipo inteiro. Utilize o tipo long.\n");
        } else {
            return (int)numero;
        }
    }
}

// FUNÇÃO PARA PULAR LINHA
void skipNextLine() {
    printf("\n");
}

// FUNÇÃO PARA FABRICAR OS HASHES
void hashesFactory(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        skipNextLine();
    }
}

// FUNÇÃO PARA CRIAR UM TRIANGULO
void triangleFactory(int num) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf(" #"); 
        }
        skipNextLine();
    }
}

// FUNÇÃO PARA CRIAR TRIANGULO COM ESPAÇOS
void triangleSpacesFactory(int num) {
    for (int i = 0; i < num; i++) {
        // Impressão dos espaços à esquerda
        for (int j = 0; j < num - i - 1; j++) {
            printf(" ");
        }

        // Impressão do primeiro grupo de #
        for (int j = 0; j <= i; j++) {
            printf("#");
        }

        // Espaço entre os dois grupos de #
        printf(" "); // Adiciona um espaço

        // Impressão do segundo grupo de #
        for (int j = 0; j <= i; j++) {
            printf("#");
        }

        skipNextLine(); 
    }
}
