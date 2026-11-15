#define<stdio.h>

int ordenaArray (int* a){
int mayor= *a;
int pos_mayor=0;
int aux;
for(int m=0; m< (5-1); m++){
    mayor = a[m];
    pos_mayor=m
for(int i =1; i<5; i++){
if (a[i]>mayor){
    mayor= a[i];
    pos_mayor=1;
}
}
aux =a[m];
a[m]= mayor;
a[pos_mayor] = aux;
}

}

void imprimirArray(int*){
    for (int i=0; i<n; i++){
        printf ("%d, ", a[i]);
    }
    printf ("\n");
}


int main (){
int val = 10;
int nums[5]= {5, 6, 8, 9, 10 }

int s= sumarArray (nums);
printf ("Suma: %d \n", s);
imprimirArray (nums, 5);
ordenarArray(nums)
imprimirArray(&nums[0], 5);
}