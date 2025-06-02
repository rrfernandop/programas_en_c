#include <stdio.h>
#include <string.h>

int main() {
    char texto[] = "need,to,recharge,matcha";
    char *token = strtok(texto, ",");

    while (token != NULL) {
        printf("Frase: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
