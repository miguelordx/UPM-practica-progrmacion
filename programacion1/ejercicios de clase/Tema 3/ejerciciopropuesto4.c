#include<stdio.h>

#define FILA 3
#define COLUMNA 4

int main (){

    int matriz[FILA][COLUMNA];

    
    for (int i = 0; i < FILA; i++){
      for (int j = 0; j < COLUMNA; j++){
        printf ("Introduzca el valor de la fila %d columna %d: ",i+1, j+1);
        scanf ("%d", &matriz[i][j]);
      }
    }


    
    for (int i = 0; i < FILA; i++){
      for (int j =0; j < COLUMNA; j++){
        printf ("%d \t", matriz[i][j]);
      
       }
       printf ("\n");
      }
    
    

    return 0;
}