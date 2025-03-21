#include <stdio.h>

#define FILAS 2
#define COLUMNAS 2
#define OPERACIONES 6 

int main() {
    float matriz[FILAS][COLUMNAS][OPERACIONES];

    
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Dame el primer número: ");
            scanf("%f", &matriz[i][j][0]);

            printf("Dame el segundo número para [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j][1]); 

          
            matriz[i][j][2] = matriz[i][j][0] + matriz[i][j][1]; 
            matriz[i][j][3] = matriz[i][j][0] - matriz[i][j][1];  
            matriz[i][j][4] = matriz[i][j][0] * matriz[i][j][1];  
            matriz[i][j][5] = (matriz[i][j][1] != 0) ? (matriz[i][j][0] / matriz[i][j][1]) : 0; 
            printf("\n");
        }
    }

    printf("\n|%10s\t|%10s\t|%10s\t|%10s\t|%15s\t|%10s\t|\n", 
           "num1", "num2", "suma", "resta", "multiplicación", "división");
    printf("---------------------------------------------------------------------------------------------------\n");
    
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("|%10.2f\t|%10.2f\t|%10.2f\t|%10.2f\t|%15.2f\t|%10.2f\t|\n", 
                   matriz[i][j][0], matriz[i][j][1], matriz[i][j][2], 
                   matriz[i][j][3], matriz[i][j][4], matriz[i][j][5]);
        }
    }

    return 0;
}
