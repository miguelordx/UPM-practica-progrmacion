 
#include <stdio.h> 
#include <windows.h> 
 
 
int main() { 
  
   // Inicialización 
   int multiplicando; // Variable para primer operando 
   int multiplicador; // Variable para segundo operando 
   int contador;      // Variable para contador de sumas 
   int resultado;     // Variable para resultado 
 
   // Entrada 
   printf ("Escriba el multiplicando: "); 
   scanf ("%d",&multiplicando); 
   printf ("Escriba el multiplicador: "); 
   scanf ("%d",&multiplicador); 
 
   // Procesamiento 
   contador = 0; 
   resultado = 0; 
   while(contador < multiplicador) { 
      resultado = resultado + multiplicando; 
      contador = contador + 1; 
   } 
    
   // Salida 
   printf ("El resultado de multiplicar %d por %d es %d\n", 
           multiplicando, multiplicador, resultado); 
  
   system ("pause"); // Si no Windows usar getchar() 
 
   return 0; 
}
//He puesto el punto de ruptura en la línea 25 para ver como se va sumando el multiplicando cada vez que le doy al botón de continuar (f5) (suma las veces que hayas puesto en el multiplicador).

//Multiplicador(5) * Multiplicando(3) = 15
//Multiplicador(3) * Multiplicando(5) = 15
//Multiplicador(1) * Multiplicando(9) = 9