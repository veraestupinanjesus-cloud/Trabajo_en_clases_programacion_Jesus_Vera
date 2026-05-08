#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"

int main() {
    int n1, n2, opcion;

    do {
        printf("\n--- CALCULADORA ULTRA-MODULAR ---\n");
        printf("1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese el primer numero: ");
            scanf("%d", &n1);
            printf("Ingrese el segundo numero: ");
            scanf("%d", &n2);
        }

        switch (opcion) {
            case 1: printf("Resultado Suma: %d\n", sumar(n1, n2)); break;
            case 2: printf("Resultado Resta: %d\n", restar(n1, n2)); break;
            case 3: printf("Resultado Multiplicacion: %d\n", multiplicar(n1, n2)); break;
            case 4: printf("Resultado Division: %.2f\n", dividir(n1, n2)); break;
            case 5: printf("Saliendo del programa...\n"); break;
            default: printf("Opcion invalida.\n");
        }
    } while (opcion != 5);

    return 0;
}