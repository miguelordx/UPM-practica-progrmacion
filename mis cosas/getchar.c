#include <stdio.h>

int main(void) {
    char c;
    int contador = 0;

    printf("Escribe algo y pulsa Enter:\n");

    // getchar() va leyendo la entrada letra por letra hasta que encuentra un salto de línea ('\n')
    while ((c = getchar()) != '\n') {
        contador++; // Suma 1 por cada carácter leído
    }

    printf("Has escrito un total de %d caracteres.\n", contador);

    return 0;
}