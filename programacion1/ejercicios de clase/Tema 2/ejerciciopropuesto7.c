#include <stdio.h>

int main() {
    int numero, copia;
    int digitos = 0;
    int suma = 0;
    int resto;

    printf("Introduce un numero entero positivo: ");
    scanf("%d", &numero);

    // Guardamos una copia del número solo para mostrarla bonita al final si queremos
    copia = numero;

    // Si el número es 0, tiene 1 dígito y la suma es 0
    if (numero == 0) {
        digitos = 1;
        suma = 0;
    } else {
        // Bucle para extraer las cifras una a una
        while (numero > 0) {
            resto = numero % 10;     // Obtenemos el último dígito (el resto)
            suma = suma + resto;     // Sumamos ese dígito al total
            digitos++;               // Aumentamos el contador de dígitos
            numero = numero / 10;    // Reducimos el número quitándole la última cifra (cociente)
        }
    }

    printf("\n--- Resultados ---\n");
    printf("El numero de digitos es: %d\n", digitos);
    printf("La suma de los digitos es: %d\n", suma);

    return 0;
}