#include <stdio.h>

int signo(int num) {
    if (num > 0) {
        return 1; /
    } else if (num < 0) {
        return -1; 
    } else {
        return 0; 
    }
}

int main() {
    int numero;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    
    int sig = signo(numero);
    
    if (sig == 1) {
        printf("El número %d es positivo.\n", numero);
    } else if (signo == -1) {
        printf("El número %d es negativo.\n", numero);
    } else {
        printf("El número es cero.\n");
    }
    
    return 0;
}