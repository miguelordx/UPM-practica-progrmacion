#include <stdio.h>
#include <stdbool.h>


typedef struct {
double numero1;
double numero2;
double suma;
double resta;
double multiplicacion;
double division;
bool calculos_ok;
} tCalculadora;


int main(){
    tCalculadora calc;
    double numero;

    printf ("Introduzca el primer numero: ");
    scanf ("%lf", &numero);
    calc.numero1=numero;
    printf ("Introduzca el segundo numero: ");
    scanf ("%lf", &numero);
    calc.numero2=numero;


    calc.suma= calc.numero1 + calc.numero2;
    calc.resta= calc.numero1  - calc.numero2;
    calc.multiplicacion= calc.numero1 * calc.numero2;

    if (calc.numero2 != 0){
    calc.division= calc.numero1 / calc.numero2;
     calc.calculos_ok = true;
    }
    else{
        calc.calculos_ok = false;
    }

    printf ("Primer numero: %lf\n",calc.numero1 );
    printf ("Segundo numero: %lf\n",calc.numero2 );
if (calc.calculos_ok){
    
    printf ("Suma: %lf\n", calc.suma);
    printf ("Resta: %lf\n", calc.resta);
    printf ("Multiplicacion: %lf\n", calc.multiplicacion);
    printf ("Division: %lf ", calc.division);
   
    }
else{
    printf ("Los calculos no fueron validos");

    }
   
return 0; 

}