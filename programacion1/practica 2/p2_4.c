#include <stdio.h>

int main() {
int numero[10];
int opcion;

for(int i=0; i<10; i++){
printf("Indique el valor del numero de la posicion %d :",i+1 );
scanf ("%d", &numero[i]);
}


printf ("1. Mostrar el primer múltiplo de 3 que hay en la secuencia. 
2. Escribir la secuencia al revés. 
3. Calcular cuál es la mayor distancia entre dos números consecutivos. 
4. Calcular la media de los números introducidos. 
5. Mostrar los números perfectos que haya en la secuencia. 
6. Salir.
Elija la opcion que quiera ejecutar: ");
scanf("%d", &opcion);
switch (opcion){
    case 1: {
    int encontrado = 0;
    for(int i = 0; i < 10 && !encontrado; i++) {
        if(numero[i] % 3 == 0) {
            printf("El primer múltiplo de 3 es: %d\n", numero[i]);
            encontrado = 1;
        }}}
        case 2: {

        }



}
return 0;
}