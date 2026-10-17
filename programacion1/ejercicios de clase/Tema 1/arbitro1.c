#include<stdio.h>

int main (){

int numero1;
int numero2;


printf("Indique un numero para que el usuario 2 lo adivine: ");
scanf ("%d", &numero1);
printf("\nIndique el numero que cree que el usuario 1 ha dicho: ");
scanf ("%d", &numero2);
if(numero1 == numero2){  
printf("\nEl usuario 2 ha leido correctamente la mente del primero");
}
else{
printf ("\nEl ususario 2 no ha leido correctemente la mente del rival");
}
return 0;
}