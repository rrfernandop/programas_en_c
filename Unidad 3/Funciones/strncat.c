#include <stdio.h>
#include <string.h>

int main() { // inicio de metodo principal
    char saludo[50] = "Profe, haga un giveaway de ";  // cadena
    char nombre[] = "Puntos extras"; // cadena 2 

    // concatenar los primeros 10 caracteres de "Puntos extras"
    strncat(saludo, nombre, 10);

    printf("Impresión: %s\n", saludo);    // Impresion

    return 0;
}
