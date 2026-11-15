#include <stdio.h>

int main (){
char c;
int contador= 0;
int contadorA= 0;

printf ("Escriba una frase (ENTER para terminar): ");
scanf (" %c", c);
do{
if (c = getchar()){
    contador++;
    if ((c == 'a')||(c == 'A')){
        contadorA++;
    }
}


}while (c != '\n');
printf ("El numero de caracteres totales es de %d \n", contador);
printf ("El numero de 'a' o 'A' totales es de %d \n", contadorA);


}