#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP (CP_UTF8);
    SetConsoleOutputCP (CP_UTF8);


    int contador = 0;
    int número;



  do{
    printf("Indique valores enteros para saber si son negativos: ");
 scanf("%d", &número);
 if (número < 0){
    contador++;
 }
    

  }while (número != 0 );
 
printf("El número de valores negativos que has indicado es de %d", contador);

  return 0;
}