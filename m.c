#include <stdio.h>

int sumar(int a, int b);
int main (int argc, char *argv[]) {
    int a, b;
    printf("Ingrese el 1er numero:");
    scanf("%d",&a);
    printf("Ingrese el 2do numero:");
    scanf("%d",&a);
    printf("La suma es: %d", sumar(a,b));
    return 0;
}
int sumar(int a, int b){
return a+b;
}
 