#include <stdio.h> 
#include <windows.h> 

double sumar(double op1, double op2) { 
return (op1 + op2); 
}
double restar(double op1, double op2) { 
return (op1 - op2); 
}
double multiplicar(double op1, double op2) { 
return (op1 * op2); 
}
double dividir(double op1, double op2) { 
return (op1 / op2); 
}


int main() { 
// Inicialización 
double operando1; 
// Variable para primer operando 
double operando2;
// Variable para segundo operando 
double resultado;  
// Variable para resultado 
    
   // Entrada 
   printf ("Teclee el valor del primer operando: "); 
   scanf ("%lf", &operando1); 
 
   printf ("Teclee el valor del segundo operando: "); 
   scanf ("%lf", &operando2); 
    
   // Procesamiento + Salida 1: SUMA 
   resultado = sumar(operando1, operando2); 
printf ("\nEl resultado de la suma es %f ", resultado); 
    
   // Procesamiento + Salida 2: RESTA 
   resultado = restar(operando1, operando2); 
   printf ("\nEl resultado de la resta es %lf ", resultado); 
  
   // Procesamiento + Salida 3: MULTIPLICACIÓN 
   resultado = multiplicar(operando1, operando2); 
   printf ("\nEl resultado de la multiplicacion es %lf ",  
           resultado); 
  
   // Procesamiento + Salida 4: DIVISIÓN 
   if (operando2 == 0) {
       printf("\nDividir entre cero no se puede porque su limite llega hasta el infnito\n");
       }
        else {
   resultado = dividir(operando1, operando2); 
   printf ("\nEl resultado de la division es %lf \n",  
            resultado); 
 }
   system ("pause"); // Si no Windows usar getchar()  
   
   return 0; 
}