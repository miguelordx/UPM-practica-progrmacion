#include <stdio.h>

int main (){
char c;
int contador=0;
int contadorA=0;


printf("Introduzca una secuencia de caracteres (pulsa . para terminar): ");
scanf (" %c", &c);

do{
contador++;

if ((c == 'a') || (c == 'A')){
    contadorA++;
}
scanf (" %c", &c);
}while (c != '.');

printf ("El numero total de caracteres es de %d \n", contador);
printf ("El numero total de a o A es de %d", contadorA);


return 0;
}