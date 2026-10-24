#include <stdio.h>
#include <limits.h> // Necesario para INT_MAX e INT_MIN

int main() {
    int numero;
    int contador = 0;
    int mayor = INT_MIN; // Inicializamos con el mínimo valor posible
    int menor = INT_MAX; // Inicializamos con el máximo valor posible

    printf("Introduce una secuencia de números enteros (0 para terminar):\n");

    // Leemos el primer número
    scanf("%d", &numero);

    // Bucle mientras el número no sea 0
    while (numero != 0) {
        contador++; // Incrementamos el contador de elementos

        // Evaluamos si es el nuevo máximo
        if (numero > mayor) {
            mayor = numero;
        }

        // Evaluamos si es el nuevo mínimo
        if (numero < menor) {
            menor = numero;
        }

        // Leemos el siguiente número
        scanf("%d", &numero);
    }

    // Mostramos los resultados
    printf("\n--- Resultados ---\n");
    if (contador > 0) {
        printf("Cantidad de elementos introducidos: %d\n", contador);
        printf("Número mayor: %d\n", mayor);
        printf("Número menor: %d\n", menor);
    } else {
        printf("No se introdujo ningún elemento en la secuencia (se ingresó 0 al inicio).\n");
    }

    return 0;
}