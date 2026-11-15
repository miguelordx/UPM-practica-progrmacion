#include <stdio.h>

int main (){
int opcion;

printf ("Introduzca la opcion que quiere introducir: ");
scanf("%d", &opcion);
switch (opcion){
case 1:
printf("Marcada opción 1");
break;
case 2:
printf("Marcada opción 2");
break;
case 3:
printf("Marcada opción 3");
break;
default:
printf("Opción no contemplada");
}
}