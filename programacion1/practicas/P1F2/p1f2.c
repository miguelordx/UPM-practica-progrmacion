 
#include <stdio.h> 
#include <windows.h> 
 
int main() { 
   // Inicialización 
   int sumando1; // Variable para el primer sumando 
   int sumando2; // Variable para el segundo sumando 
   int resultado;   // Variable para el resultado 
 
   // Entrada 
   printf ("Teclee el valor del primer sumando: "); 
   scanf ("%d", &sumando1); 
 
   printf ("Teclee el valor del segundo sumando: "); 
   scanf ("%d", &sumando2); 
 
   // Procesamiento 
   resultado = sumando1 + sumando2; 
  
   // Salida 
   printf ("\nEl resultado de la suma es %d \n", resultado); 
 
   system ("pause"); // Si no Windows usar getchar() 
  
   return 0;
}
//sumando1(7) y sumando2(25) = 32
//sumando1(7) y sumando2(-25) = -18
//sumando1(3) y sumando2(5) = 8
//sumando1(8) y sumando2(0) = 8