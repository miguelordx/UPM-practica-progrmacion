#include <stdio.h>

int main (){
int numero;

printf ("Indique un numero entero:\n");
scanf ("%d", &numero);

if (numero % 2== 0){
    printf ("Este numero es par\n");
}
else{
    printf ("Este numero es impar\n");
}
return 0;
}