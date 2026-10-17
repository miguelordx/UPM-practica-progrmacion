#include <stdio.h>
#include <limits.h>

int main(){
 int x;
 int contador = 0;
 int mayor = INT_MAX;
 int menor = INT_MIN;

 while(x !=0 ){
  printf ("Indique el valor que quiera: ");
  scanf("%d", &x);
  printf("El valor minimo que has indicado es = %d\n", menor);
  printf("El valor maximo que has indicado es = %d\n", mayor);

 } 


 return 0;
}