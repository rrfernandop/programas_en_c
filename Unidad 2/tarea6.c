#include <stdio.h>

void tabla_multiplicar(int num) {
    printf("Tabla de multiplicar del %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    
    tabla_multiplicar(numero);
    
    return 0;
}