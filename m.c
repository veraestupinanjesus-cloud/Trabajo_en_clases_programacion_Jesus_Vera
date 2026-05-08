#include <stdio.h>
#include "sumar.h"
#include "restar.h"

int main (int argc, char *argv[]) {
    int a, b;
    printf("Ingrese el 1er numero:");
    scanf("%d",&a);
    printf("Ingrese el 2do numero:");
    scanf("%d",&a);
    printf("La suma es: %d", sumar(a,b));
    printf("La resta es:%d",restar(a,b));
    return 0;
}

 