#include <stdio.h> 
#include <windows.h> 
 
 
int main() { 
  
   // Inicialización 
   int base; // Variable para primer operando 
   int exponente; // Variable para segundo operando 
   int contador;      // Variable para contador de sumas 
   int resultado;     // Variable para resultado 
 
   // Entrada 
   printf ("Escriba la base: "); 
   scanf ("%d",&base); 
   printf ("Escriba el exponente: "); 
   scanf ("%d",&exponente); 
 
   // Procesamiento 
   contador = 0; 
   resultado = 1;
   while(contador < exponente) { 
      resultado = resultado * base; 
      contador = contador + 1; 
   } 
    
   // Salida 
   printf ("El resultado de elevar %d a la potencia de %d es %d\n", 
           base, exponente, resultado); 
  
   system ("pause"); // Si no Windows usar getchar() 
 
   return 0; 
}