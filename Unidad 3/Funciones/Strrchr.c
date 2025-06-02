#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "Happy with 7th today after starting 18th";
    char letra = 'o';

    char *ptr = strrchr(texto, letra);

    if (ptr != NULL) {
        printf("La última '%c' está en la posición: %ld\n", letra, ptr - texto);
        printf("Texto desde esa posición: %s\n", ptr);
    } else {
        printf("No se encontró la letra '%c'.\n", letra);
    }

    return 0;
}
