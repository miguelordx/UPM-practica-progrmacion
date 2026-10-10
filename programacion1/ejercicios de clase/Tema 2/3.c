#include <stdio.h>
#include <windows.h>

int main (void) {

    SetConsoleOutputCP (CP_UTF8);
    SetConsoleCP (CP_UTF8);

int numero;
int contador;
int divisibles;

contador = 0;
divisibles = 0;

while (numero != 0){
while (contador < 10 ){
 contador = contador + 1;
 printf ("Introduzca un número: ");
 scanf ("%d", &numero);

if (numero % 13== 0){
divisibles = divisibles + 1; 
} 
}
}  
printf ("El numero del regalo que debes abrir es %d", divisibles);
 
return 0;

}