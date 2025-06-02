#include <stdio.h>
#include <string.h>

int main() {
    char palabra[] = "987654very best friend";
    char numeros[] = "0123456789";

    size_t cantidad = strspn(palabra, numeros);
    printf("\n%s\n",palabra);
    printf("\n\nLos primeros %zu caracteres son solo números.\n", cantidad);
    return 0;
}
