#include <stdio.h>

int main(){
    int numero = 42;
    int *apuntador = &numero;

    printf("Valor del numero: %d\n", numero);
    printf("Direccion del numero%p\n", &numero);
    printf("Valor del apuntador: %p\n", apuntador);
    printf("Valor al que aplica: %d\n", *apuntador);

    return 0;
}