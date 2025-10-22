#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[101];
    char *p;

    // Gerar automaticamente a frase com nome completo + RU
    snprintf(frase, sizeof(frase), "Israel Vieira da Silva 3935417");

    printf("Frase original: %s\n", frase);

    // Ponteiro para percorrer a string
    p = frase;

    while (*p != '\0') {
        char c = toupper(*p); // Ignora maiúsculas/minúsculas para vogais

        // Substituir vogais por números
        switch (c) {
            case 'A': *p = '2'; break;
            case 'E': *p = '3'; break;
            case 'I': *p = '4'; break;
            case 'O': *p = '5'; break;
            case 'U': *p = '6'; break;
        }

        // Substituir dígitos por vogais (mapa definido)
        switch (*p) {
            case '0': *p = 'A'; break;
            case '1': *p = 'E'; break;
            case '2': *p = 'I'; break;
            case '3': *p = 'O'; break;
            case '4': *p = 'U'; break;
            case '5': *p = 'a'; break;
            case '6': *p = 'e'; break;
            case '7': *p = 'i'; break;
            case '8': *p = 'o'; break;
            case '9': *p = 'u'; break;
        }

        p++; // Avança para o próximo caractere
    }

    printf("Frase criptografada: %s\n", frase);

    return 0;
}
