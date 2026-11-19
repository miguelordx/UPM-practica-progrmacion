#include <stdio.h>
#include <stdlib.h>

#define DIM 10
int main() {
int numero[DIM];
int opcion;

for(int i=0; i<10; i++){
printf("Indique el valor del numero de la posicion %d :",i+1 );
scanf ("%d", &numero[i]);
}


printf ("1. Mostrar el primer múltiplo de 3 que hay en la secuencia.\n ");
printf ("2. Escribir la secuencia al revés.\n ");
printf ("3. Calcular cuál es la mayor distancia entre dos números consecutivos.\n ");
printf ("4. Calcular la media de los números introducidos.\n ");
printf ("5. Mostrar los números perfectos que haya en la secuencia.\n"); 
printf ("6. Salir.\n");
printf ("Elija la opcion que quiera ejecutar: ");

do{
scanf("%d", &opcion);

switch (opcion){
        case 1: 
        int encontrado = 0;
        for(int i = 0; i < 10 && !encontrado; i++) {
        if(numero[i] % 3 == 0) {
            printf("El primer múltiplo de 3 es: %d\n", numero[i]);
            encontrado = 1;
        }}
        break;

        case 2: 
        for (int i= DIM; i>= 0; i--){
            printf("%d ", numero[i]);
        }
        break;

        case 3:
        int resultado;
        int mayor;
        for (int i=0; i<9; i++){
            resultado= abs(numero[i]-numero[i+1]);
        }
        if (resultado> mayor){
            mayor= resultado;
        }
        printf ("La mayor diferencia entre dos numeros es de %d", mayor);
        break;

        case 4:
        int suma=0;
        double media;
        for (int i=0; i<10; i++){
        suma += numero[i];
        }
        media= (double) suma/DIM;
        printf ("La media del array es de: %lf", media);
        break;

        case 5:
        int numPerfecto;
        int div;
        int sumadiv=0;
        printf ("El numero de numeros perfectos es de :");
        for (int i=0; i <= DIM; i++){
            for(div=1; div<= numero[i]/2; div++){
                if ((sumadiv % div) == 0){
                    sumadiv += div;

                }
            }
            if (sumadiv == numero[i]){
                        printf("%d ", numero[i]);
                    }
        }
        break;

        case 6:
        printf ("Hasta pronto");
        break;

        default:
        printf("\nLas opciones posibles son de 1 a 6");

}
}while (opcion !=6);
return 0;
}