#include <stdio.h>

void imprimir_pares(int menor, int mayor) {
    printf("Números pares:\n");
    for (int i = menor; i <= mayor; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int menor, mayor;
    printf("Ingrese un número menor: ");
    scanf("%d", &menor);
    printf("Ingrese un número mayor: ");
    scanf("%d", &mayor);
    
    if (menor > mayor) {
        printf("Error: El primer número debe ser menor que el segundo.\n");
        return 1;
    }
    
    imprimir_pares(menor, mayor);
    
    return 0;
}