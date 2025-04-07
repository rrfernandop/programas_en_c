#include <stdio.h>

void setColor(const char* color) {
printf("%s", color);
}

int main (){
    //LIMPIAR PANTALLA 
    printf("\033[2J");

    setColor("\033[4;32m");
    printf("\nBienvenido al programa con marco y colores!\n");

    //RESTAURAR COLOR 
    setColor("\033[0m");

    setColor("\033[7;34m");
    printf("\nBienvenido al programa con marco y colores!\n");

    setColor("\033[0m");

    setColor("\033[4;34m");
    printf("\nBienvenido al programa con marco y colores!\n");
    
    setColor("\033[4;30m");
    printf("\nR\n");
    setColor("\033[4;31m");
    printf("\nU\n");
    setColor("\033[4;32m");
    printf("\nB\n");
    setColor("\033[4;33m");
    printf("\nI\n");
    setColor("\033[4;34m");
    printf("\nC\n");
    setColor("\033[4;35m");
    printf("\nH\n");
    setColor("\033[4;36m");
    printf("\nO\n");
    setColor("\033[4;37m");
    printf("\nT\n");
    setColor("\033[4;31m");
    printf("\nA\n");
    return 0;
}
