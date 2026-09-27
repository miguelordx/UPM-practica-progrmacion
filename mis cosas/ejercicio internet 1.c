#include <stdio.h>

int main()
{
    int fecha;
    int edad;

    printf("Hola");
    printf("Por favor introduzca el anio en el que nacio: ");
    scanf("%d", &fecha);
    edad = 2026 - fecha;
    printf("Si usted nacio en %d, cumplira %d anios este anio.", fecha, edad);

    return 0;
}