#include <stdio.h>
#include <string.h>

int main() {
    char frase[] = "holi!, te quería contar lo que estuve haciendo durante mayo"; //frase string
    char caracteresNoDeseados[] = "í"; //caracteres seleccionados

    // busca la posición del primer carácter seleccionado
    size_t posicion = strcspn(frase, caracteresNoDeseados);

    printf("\n\nLa primera 'í' está en la posición: %zu\n\n", posicion);

    return 0;
}
