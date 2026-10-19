#include <stdio.h>
#include <windows.h>

int main (){

SetConsoleOutputCP (CP_UTF8);
SetConsoleCP (CP_UTF8);

int NUMEROS [6];
int suma=0;

for (int i=0; i<6; i++){
printf("Introduce los numeros que quieras mostrar en el array %d: ", i +1);
scanf("%d", &NUMEROS[i]);
}
for (int i=0; i<6; i++){  //para ponerlos en pantalla
printf("%d - ", NUMEROS[i]);

suma= suma + NUMEROS[i];
}
printf("\nLa suma de todos los números de array es de %d", suma);





return 0;
}