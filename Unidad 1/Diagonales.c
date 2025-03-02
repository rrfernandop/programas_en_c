#include <stdio.h>
int main(){
    printf("%s","Diagonal normal:\n");
        int tamano = 10;
         for (int i = 0; i < tamano; i++) {
         for (int j = 0; j < tamano; j++) {
            if (i == j) {
                printf("%s","*");
            } else {
                printf("%s"," ");
            }
            }
        printf("%s","\n");
        }

        printf("%s","\n");
        printf("%s","Diagonal inversa:\n");
          for (int i = 0; i < tamano; i++) {
          for (int j = 0; j < tamano; j++) {
            if (i + j == tamano - 1) {
                printf("%s","*");
            } else {
                printf("%s"," ");
            }
            }
        printf("\n");
        }
         return 0;
}