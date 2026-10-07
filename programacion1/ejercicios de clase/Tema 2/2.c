#include <stdio.h>
#include <windows.h>

int preguntaPrecio (void);

int main() {
    int valorLibro;
    int total;
    int media;
    int numvendidos = 0;

    SetConsoleOutputCP (CP_UTF8);
    SetConsoleCP (CP_UTF8);

    fprintf(stdout, "Indique el valor del libro vendido (en euros)");
    valorLibro= preguntaPrecio ();
    total = 0;


    while (valorLibro >= 0){
    total = total + valorLibro;
    numvendidos= numvendidos + 1;
    fprintf (stdout, "Indique el valor del libro vendido (en euros)");
    valorLibro = preguntaPrecio ();
    
    media = total / numvendidos;
    }
    printf ("La venta total de libros llega a un valor de %d euros\n", total);
    printf ("La media del valor de los libros vendidos es de %d\n", media);
    system("Pause");

    return 0;
}
int preguntaPrecio (void){
 int valor;

 fscanf (stdin, "%d", &valor);
 return valor;
}