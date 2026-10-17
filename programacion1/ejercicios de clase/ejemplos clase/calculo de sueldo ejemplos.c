#include <stdio.h>
#include <windows.h>

int main (void) {

    SetConsoleOutputCP (CP_UTF8);
    SetConsoleCP (CP_UTF8);


double sueldoBAnual; // Sueldo bruto anual del empleado
int numPagas;        // Número de pagas anuales 
double retencion;    // Retención fiscal a practicar
double sueldoBMes;   // Sueldo bruto mensual del empleado
double sueldoNeto;   // Sueldo neto del empleado

printf ("Indique el sueldo bruto anual del empleado: ");
scanf ("%lf", &sueldoBAnual);
fprintf (stdout, "Indique el número de pagas al año: ");
scanf ("%d", &numPagas);
printf ("Indique el porcentaje de retención a practicar: ");
fscanf (stdin, "%lf", &retencion);
sueldoBMes = sueldoBAnual / numPagas;
sueldoNeto = sueldoBMes * (1 - retencion/100);
printf ("El sueldo neto mensual del empleado es de: %.2f euros.\n", sueldoNeto);
return 0;

}
