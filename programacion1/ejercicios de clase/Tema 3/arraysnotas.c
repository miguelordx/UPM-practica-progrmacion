#include <stdio.h>

#define ASIGNATURAS 3
int main(){

    double notas [ASIGNATURAS][4];

for (int a= 0; a<ASIGNATURAS; a++){
   for (int n=0; n<4; n++){
    printf ("Introduce la nota %d de asignatura %d: ", n+1, a+1);
    scanf("%lf", &notas [a][n]);
   }
}
//calcular la media
for(int a=0; a<ASIGNATURAS; a++){
    int suma =0;
    for(int n=0; n<3; n++){
        suma = suma + notas [a][n];
    }
    notas[a][3] = suma /3;
}
//mostrar por pantalla
for (int a=0; a<ASIGNATURAS; a++){
    printf ("Asignatura %d: ", a+1);
    for (int n=0; n<3; n++){
        printf ("%lf , ", notas [a][n]);
    }
    printf (" media: %lf \n", notas[a][3]);   //aqui va la media
}
//que tengo en el array con punteros? (faltan cosas por completar)
double* puntazo = (double)
for (int i=0; i<12; ){
   printf ("%d")
}
int num=42;
int* pun;
pun = &num;
printf("%d", *pun);

return 0;
}