#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP (CP_UTF8);
    SetConsoleOutputCP (CP_UTF8);

    int número = 0;
    int contador = 0;
    int anterior;


 
  do{
    anterior = número;
    printf("Indique valores para saber si son en módulo mayores que 5: ");
    scanf("%d", &número);
 if ((número >5)||(número <-5)){
    contador++;
 }
    
  }while (!((número<0)&&(anterior<0)));
 
printf("El número de valores mayores en módulo que 5 que has indicado es de %d", contador);

  return 0;
}