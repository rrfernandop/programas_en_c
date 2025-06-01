#include <stdio.h> //libreria convencional
#include <string.h> // librería necesaria para usar strcpy

int main() { // inicia metodo principal
    // cadena original
    char saludo[] = "Hola, Fernando";

    // nueva cadena para pegar lo de cadena original
    char copia[50];  // delimitar un espacio suficiente

    //copiar el contenido de 'saludo' a 'copia'
    strcpy(copia, saludo);

    // impresion
    printf("\n\nTexto original: %s\n", saludo);
    printf("\nTexto copiado: %s\n", copia);

    return 0;
}

