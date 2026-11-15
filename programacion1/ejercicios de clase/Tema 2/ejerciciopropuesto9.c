#include <stdio.h>
#include <limits.h>

int main (){
    int min = INT_MAX;
    int num;


    printf ("Indique una secuencia de numeros: ");
    scanf ("%d", &num);
do{
 scanf ("%d", &num);

 if (num <min){
    min = num;
 }


}while (num !=0); 

printf ("El numero mas pequeño es %d", min);

return 0;
}