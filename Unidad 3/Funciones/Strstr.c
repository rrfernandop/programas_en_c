#include <stdio.h>
#include <string.h>

int main() {
    char frase[] = "Por qué es tan delgado el nuevo Samsung Galaxy S25 Edge?";
    char busqueda[] = "Samsung";

    char *resultado = strstr(frase, busqueda);
    printf("\n%s\n",frase);
    if (resultado != NULL) {
        printf("Se encontró la palabra '%s' en: \"%s\"\n", busqueda, resultado);
    } else {
        printf("No se encontró la palabra '%s'.\n", busqueda);
    }

    return 0;
}