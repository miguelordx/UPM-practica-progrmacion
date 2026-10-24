#include <stdio.h>
#include <stdbool.h>

bool chequea (int numero1, int numero2, double real) {
    bool resultado;
    
    if (numero1> numero2){
        double dividido= (double) numero1 / numero2;
    }

    if (numero1 < numero2){
        double dividido= (double) numero2 / numero1;
    }

    if (real > dividido){
      resultado = true; 
      printf("%d", resultado);
    }
    else{
    resultado = false;
    printf("%d", resultado);
    }

 return resultado;
}