#include <stdio.h>

int main() {
    // Declaración e inicialización de la variable entera x
    int x = 25;

    // Declaración del puntero ptr e inicialización apuntando a x
    int *ptr = &x;

    // Imprimir el valor de x accediendo a través del puntero con el operador de indirección *
    printf("El valor de x accedido a traves de ptr es: %d\n", *ptr);

    return 0;
}