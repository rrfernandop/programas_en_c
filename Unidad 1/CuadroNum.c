#include <stdio.h>
int main(){  
    printf("\n%s\n", "Ejemplo de impresión");
    int limitesy =0;
        while (limitesy <= 10) {
            int limitesx = 0;
            while (limitesx <= 10){
                printf("%4d", limitesx);
                limitesx++;
            }
                printf("\n");
                limitesy++;
        }
}