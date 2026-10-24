#include <stdio.h>

int main (){
double numero[8];
int contador=0;

printf("Introduzca 8 valores negativos o positivos: ");
for(int i=0; i<8; i++){
scanf ("%lf", &numero[i]);

if (numero[i]<0){
    contador++;
}

}

printf ("Numeros negativos: %d", contador);
return 0;
}
