#include <stdio.h>
#include <limits.h>

int main(){
 int x;
 int contador = 0;
 int mayor = INT_MIN;
 int menor = INT_MAX;


 printf ("Indique el valor que quiera: ");
  scanf("%d", &x);

 while(x !=0 ){
  contador++;

  if (x> mayor) {
  mayor= x;
  }
  if (x< menor) {
  menor= x;
  }
   scanf("%d", &x);
 } 


 if (contador > 0){
 printf ("La cantidad de valores introducidos es de %d\n", contador);
 printf ("El valor maximo es %d\n", mayor);
 printf ("El valor minimo es %d\n", menor);
 
 }else{
    printf ("No se ha introducido ningun numero");
 }

 return 0;
}