#include <stdio.h>

 
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 

void setColor(const char* color) {
    printf("%s", color);
}
void printMarco() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 50; j++) {
          
            if (i == 0 || i == 20 - 1 || j == 0 || j == 50 - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }
}
void llenarMatriz(int x, int y, int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
            gotoxy(x + 2 + j*4, y + 1 + i);
            scanf("%d", &matriz[i][j]);
        

        }
    }
   
}
int determinanteSarrus(int matriz[3][3]) {
    int suma_diagonal = 0, suma_inversa = 0;
    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= matriz[j][(i + j) % 3];
        }
        suma_diagonal += producto;
    }
    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= matriz[j][(3 + i - j) % 3];
        }
        suma_inversa += producto;
    }
    return suma_diagonal - suma_inversa;
}
void sumarMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}
void restaMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}
void mulMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
}
void escalarMatriz(int matriz1[3][3], int escalar, int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] * escalar;
        }
    }
}
void imprimirMatrizEnPosicion(int x, int y, int matriz[3][3]) {
    

    
    for (int i = 0; i < 3; i++) {
        
        
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j*4, y + 1 + i);
            printf("%3d", matriz[i][j]);
        }
    
    }
}

int main() {
    int opc;
    int matriz_a[3][3];
    int matriz_b[3][3];
    int matriz_suma[3][3];
    int matriz_resta[3][3];
    int matriz_mul[3][3];
    int matriz_escalar[3][3];
    //menú
    printf("\033[2J"); 
    printMarco();
    
    gotoxy(23, 7);
    printf("Menú ");
    gotoxy(10, 9);
    printf("1) Suma ");
    gotoxy(10, 11);
    printf("2) Resta ");
    gotoxy(10, 13);
    printf("3) Multiplicacion ");
    gotoxy(10, 15);
    printf("4) Determinante ");
    gotoxy(30, 19);
    printf("Opción: ");
    gotoxy(37, 19);
    scanf("%d", &opc);
    
    //resultados
    printf("\033[2J"); 

    printMarco();
    
    gotoxy(14, 9);
    printf("Matríz 1 ");
    gotoxy(32, 9);
    printf("Matríz 2 ");

   
    setColor("\033[7;34m");
    llenarMatriz(10, 10, matriz_a);

    setColor("\033[7;35m");
    llenarMatriz(28, 10, matriz_b);

    printf("\033[0m\n");
    gotoxy(20, 17);
    printf("Resultado ");
    if (opc == 1){
        setColor("\033[7;33m");
        sumarMatriz(matriz_a, matriz_b, matriz_suma);
        imprimirMatrizEnPosicion(14, 20, matriz_suma);
    } 
    if (opc == 2){
        setColor("\033[7;33m");
        restaMatriz(matriz_a, matriz_b, matriz_resta);
        imprimirMatrizEnPosicion(14, 20, matriz_resta);
    } 
    if (opc == 3){
        setColor("\033[7;33m");
        mulMatriz(matriz_a, matriz_b, matriz_resta);
        imprimirMatrizEnPosicion(14, 20, matriz_mul);
    } 
    if (opc == 4){
        setColor("\033[7;33m");
        gotoxy(12, 20);
        int det = determinanteSarrus(matriz_a);
        printf("Determinante de Matriz: %d\n", det);
    } 
}