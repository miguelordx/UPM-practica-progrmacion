#include <stdio.h> 
#include <windows.h> 
int main() { 
// Inicialización 
int operando1; 
// Variable para primer operando 
int operando2;
// Variable para segundo operando 
int resultado;  
// Variable para resultado 
    
   // Entrada 
   printf ("Teclee el valor del primer operando: "); 
   scanf ("%d", &operando1); 
 
   printf ("Teclee el valor del segundo operando: "); 
   scanf ("%d", &operando2); 
    
   // Procesamiento + Salida 1: SUMA 
   resultado = operando1 + operando2;
   printf ("\nEl resultado de la suma es %d ", resultado); 
    
   // Procesamiento + Salida 2: RESTA 
   resultado = operando1 - operando2; 
   printf ("\nEl resultado de la resta es %d ", resultado); 
  
   // Procesamiento + Salida 3: MULTIPLICACIÓN 
   resultado = operando1 * operando2; 
   printf ("\nEl resultado de la multiplicacion es %d ",  
           resultado); 
  
   // Procesamiento + Salida 4: DIVISIÓN 
   if (operando2 == 0) {
       printf("\nDividir entre cero no se puede porque su limite llega hasta el infnito\n");
       }
        else {
   resultado = operando1 / operando2; 
   printf ("\nEl resultado de la division es %d \n",  
            resultado); 
 }
   system ("pause"); // Si no Windows usar getchar()  
   
   return 0; 
}