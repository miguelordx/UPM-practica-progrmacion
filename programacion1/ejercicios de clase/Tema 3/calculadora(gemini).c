#include <stdio.h>
#include <stdbool.h> // Necesario para usar el tipo de dato bool, true y false

// Definición de la estructura como un tipo de dato propio
typedef struct {
    float num1;           // Dato de procedencia 1
    float num2;           // Dato de procedencia 2
    float suma;           // Resultado de la suma
    float resta;          // Resultado de la resta
    float multiplicacion; // Resultado de la multiplicación
    float division;       // Resultado de la división
    bool operaciones_ok;  // Séptimo campo booleano (true si OK, false si hay error)
} Calculadora;

int main() {
    Calculadora calc;

    // Pedir los dos números reales al usuario
    printf("Introduce el primer numero real: ");
    scanf("%f", &calc.num1);

    printf("Introduce el segundo numero real: ");
    scanf("%f", &calc.num2);

    // Inicializamos el booleano en true por defecto
    calc.operaciones_ok = true;

    // Realizar las operaciones y guardarlas en la estructura
    calc.suma = calc.num1 + calc.num2;
    calc.resta = calc.num1 - calc.num2;
    calc.multiplicacion = calc.num1 * calc.num2;

    // Comprobar la división para evitar el error de división entre cero
    if (calc.num2 != 0) {
        calc.division = calc.num1 / calc.num2;
    } else {
        calc.division = 0;          // Valor por defecto en caso de error
        calc.operaciones_ok = false; // Marcamos el error en el booleano
    }

    // Mostrar todos los datos almacenados por pantalla
    printf("\n--- RESULTADOS ALMACENADOS EN LA ESTRUCTURA ---\n");
    printf("Numero de procedencia 1: %.2f\n", calc.num1);
    printf("Numero de procedencia 2: %.2f\n", calc.num2);
    printf("Suma: %.2f\n", calc.suma);
    printf("Resta: %.2f\n", calc.resta);
    printf("Multiplicacion: %.2f\n", calc.multiplicacion);
    
    if (calc.num2 != 0) {
        printf("Division: %.2f\n", calc.division);
    } else {
        printf("Division: No se puede dividir entre cero\n");
    }
    
    printf("Estado de las operaciones (valido): %s\n", calc.operaciones_ok ? "true" : "false");

    return 0;
}