#include <stdio.h>


int main (){

    
int personas;
int rollitos;
double rollitosporcabeza;

int mesamax;
double maxconsumo = -1;

for (int mesa =1; mesa <= 5; mesa++){
   personas = mesa + 1;
   printf ("Introduzca el numero de rollitos consumidos en la Mesa %d :",mesa);
   scanf ("%d", &rollitos);

rollitosporcabeza = (double)rollitos / personas;
if (rollitosporcabeza > maxconsumo) {
 maxconsumo = rollitosporcabeza;
 mesamax = mesa;
}
}

printf ("La mesa que mas ha consumido por cabeza es la Mesa %d.\n", mesamax);
printf ("Esa mesa tiene un consumo de %lf rollitos por perosna.\n", maxconsumo);
return 0;
}