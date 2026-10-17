#include <stdio.h>


int main (){
 
   int mpm2[3][4] = {
     { 11, 12, 13, 14  },
     { 21, 22, 23, 24  },
     { 31, 32, 33, 34  },
   };

   mpm2[2][1] = 99;

   for (int i = 0; i<3; i++){
      //estoy en fila i
      for (int j=0; j<4; j++){
         //columna j, i es la fila
         printf("%d, ", mpm2[i][j]);
      }
printf("\n");


   }


}