#include <stdio.h>

int main() {
    int original[6];
    int modificado[6];

    // 1. Pedir los valores al usuario para el array original
    printf("Introduzca 6 valores enteros para el array:\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &original[i]);
    }

    // 2. Crear el array modificado según la regla:
    for (int i = 0; i < 6; i++) {
        if (original[i] % 2 != 0) { // Si es impar
            modificado[i] = original[i];
        } else { // Si es par
            modificado[i] = 0;
        }
    }

    // 3. Imprimir el array original con formato [1, 2, 3, 4, 5, 6]
    printf("\nArray original: \n[");
    for (int i = 0; i < 6; i++) {
        printf("%d", original[i]);
        if (i < 5) {
            printf(", ");
        }
    }
    printf("]\n");

    // 4. Imprimir el array modificado con formato [1, 0, 3, 0, 5, 0]
    printf("Array modificado: \n[");
    for (int i = 0; i < 6; i++) {
        printf("%d", modificado[i]);
        if (i < 5) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}