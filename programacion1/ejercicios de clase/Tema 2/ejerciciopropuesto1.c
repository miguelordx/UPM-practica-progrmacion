#include <stdio.h>

int main (){
    int num;
    int contadorneg =0;
    int contadorpos =0;
do{
    printf ("introduzca un numero entero: ");
    scanf ("%d", &num);

if (num<0){
contadorneg++;
}else{
  contadorpos++;  
} 
}while(num !=0);

if ((contadorneg == 0)&&(contadorpos ==0)){
printf ("No se ha introducido ningun numero");
}else {
printf ("El numero de positivos es de %d y de negativos de %d", contadorpos, contadorneg);
}
return 0;
}