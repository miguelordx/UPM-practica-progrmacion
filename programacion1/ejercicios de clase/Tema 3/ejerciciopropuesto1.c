#include <stdio.h>
#include <limits.h>

int main (){
int suma=0; 
int producto=1;
int mayor = INT_MIN;
int menor = INT_MAX;
double media;
int contador =0; 

int numero[6];
printf ("Escriba la secuencia de numero enteros: ");
for (int i = 0; i < 6; i++){
    scanf ("%d", &numero[i]);
    contador++;
    suma += numero[i];
    producto *= numero[i];

if (numero[i]>mayor){
    mayor = numero[i];
}
if (numero[i]<menor){
    menor = numero[i];
}
}
media = (double) suma/contador;


printf ("\n\n--------Solucion ejercicio---------\n\n");
for (int i = -1; i < 5; i++){
    
    printf ("Los valores introducidos son: %d \n", numero[i+1]);
}
printf ("Suma: %d \n", suma);
printf ("Producto: %d \n", producto); 
printf ("Mayor: %d \n", mayor);
printf ("Menor: %d \n", menor);
printf ("Media: %lf \n", media);



return 0;
}
