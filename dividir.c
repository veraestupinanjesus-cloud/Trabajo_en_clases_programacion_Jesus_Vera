#include <stdio.h>
#include "dividir.h"
float dividir(int a, int b) {
    if (b == 0) {
        printf("Error: Division por cero\n");
        return 0;
    }
    return (float)a / b;
}