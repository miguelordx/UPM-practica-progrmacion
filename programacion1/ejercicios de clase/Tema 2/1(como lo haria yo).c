#include <stdio.h>
#include <windows.h>

int main(void) {
    int valorLibro;
    int total = 0;

   
    printf("Indiqueme el valor del libro vendido (en euros): ");
    scanf("%d", &valorLibro);

   
    while (valorLibro >= 0) {
        total = total + valorLibro; 

        // Vuelve a pedir un nuevo valor
        printf("Indiqueme el valor del libro vendido (en euros): ");
        scanf("%d", &valorLibro);
    }

   
    printf("El total de la venta es: %d euros\n", total);

    return 0;
}