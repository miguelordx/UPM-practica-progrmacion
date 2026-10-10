#include <stdio.h>

double dividir (double pesoCorporal,double estatura);

int main (){

    double pesoCorporal;
    double estatura;
    double IMC;
    char seguir;
 do {
    printf ("Indique su peso corporal (en kg): \n");
    scanf ("%lf", &pesoCorporal);
    printf ("Indique su estatura (en m): \n");
    scanf ("%lf", &estatura);

    IMC = dividir (pesoCorporal, estatura);
    printf ("Su IMC es de %lf \n", IMC);

    if (IMC < 18.5){
        printf ("Su indice de masa corporal es bajo\n");
    }
    if (IMC > 24.9){
        printf ("Su indice de masa corporal alto \n");
    }
    if (18.5 < IMC && IMC < 24.9){
        printf ("Su indice de masa corporal es apropiado\n");
    }

    printf ("Quiere seguir usando la calculadora de IMC? (Escriba s o S para volver a usarla):");
    scanf (" %c", &seguir);
    }  while (seguir == 's' || seguir == 'S');
    return 0;      

}
double dividir (double pesoCorporal,double estatura){
    double IMC;
    IMC = pesoCorporal / (estatura * estatura);
    return IMC;
}