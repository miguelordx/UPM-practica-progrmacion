#include <stdio.h>
#include <windows.h>

int preguntaPrecio (void);

int main() {
    int valorLibro;
    int total;

    SetConsoleOutputCP (CP_UTF8);
    SetConsoleCP (CP_UTF8);

    fprintf(stdout, "Indique el valor del libro vendido (en euros)");
    valorLibro= preguntaPrecio ();
    total = 0;


    while (valorLibro >= 0){
    total = total + valorLibro;
    fprintf (stdout, "Indique el velor del libro vendido (en euros)");
    valorLibro = preguntaPrecio ();
    }
    printf ("La venta total de libros llega a un valor de %d euros\n", total);
    system("Pause");

    return 0;
}
int preguntaPrecio (void){
 int valor;

 fscanf (stdin, "%d", &valor);
 return valor;
}