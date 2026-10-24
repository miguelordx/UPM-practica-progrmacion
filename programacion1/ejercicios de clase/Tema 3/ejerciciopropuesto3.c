#include <stdio.h>
int main(){                              //El ejercicio esta bien pero a la vez no, ya que estamos modificando el array original 
    int numero[6];                       //y no estamos creando uno nuevo como dice el ejercicio. En "ejpr3(gemini).c" está bien hecho)                      


    printf ("Introduzca 6 valores: ");   //Introducir valores
    for (int i =0; i<6; i++){
        scanf ("%d", &numero[i]);
    }


    printf ("[");                       //Mostrar array introducido
    for (int i=0; i<6; i++){
        printf ("%d", numero[i]);

        if (i<5){
        printf (", ");
    }
    }
    printf ("]\n");

    
   printf ("[");                       //Mostrar array modificado
   for (int i=0; i<6; i++){
        if (numero[i] % 2 == 0){
            numero[i]=0;
            printf ("%d", numero[i]);
        }else{
         printf ("%d", numero[i]);
        }
        
        if (i<5){
        printf (", ");
    }
    }
    printf ("]");

return 0;
}