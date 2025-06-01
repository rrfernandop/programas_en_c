#include <stdio.h>
#include <string.h>

int main() { //metodo principal
    char mensaje[] = "Si esto ya no funciona, ya me doy por vencido queridxs"; //cadena

    // contar la longitud de la cadena
    int longitud = strlen(mensaje);
    // impresión
    printf("\n\nCadena '%s' tiene %d caracteres.\n\n", mensaje, longitud);

    return 0;
}
