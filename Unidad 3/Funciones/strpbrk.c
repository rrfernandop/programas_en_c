#include <stdio.h>
#include <string.h>

int main() {
    char frase[] = "Hoy toca reu para kosakear y jugar Roblox amixes!";
    char vocales[] = "aeiouAEIOU";

    char *ptr = strpbrk(frase, vocales);

    if (ptr != NULL) {
        printf("\n\nLa primera vocal en la frase: '%s'\n Es: '%c'\n\n", frase, *ptr);
    } else {
        printf("No se encontraron vocales en la frase.\n");
    }

    return 0;
}