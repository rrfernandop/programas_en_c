//Crear CSV 28/04/2025
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define MAX_LINE 1024
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
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
int main (){
    FILE *file;
    char nombre[MAX];
    int edad;
    char pais[MAX];
    int cantidad, i;
    char arch[MAX];
    char archivo[MAX];
    char line[MAX_LINE];
    char *token;
    int fila = 7;
    int contador = 1;

    printf("\033[2J");
    printMarco();
    setColor("\033[7;32m");
    gotoxy(20, 13);
    printf("%s", "Personas:");
    setColor("\033[0m");
    gotoxy(30, 13);
    scanf("%d", &cantidad);
    getchar();

    printf("\033[2J");
    printMarco();
    gotoxy(3, 13);
    setColor("\033[7;34m");
    printf("%s", "Ingresa el nombre del archivo: ");
    gotoxy(34, 13);
    scanf("%s", arch);

    strcpy(archivo, "../");  
    strcat(archivo, arch);   // concatenar datos
    strcat(archivo, ".csv"); 

    file = fopen(archivo, "w");
    if (file == NULL){
        perror("Error al crear el archivo");
        return 1;
        }

// Escribir encabezados 
fprintf(file, "Nombre, Edad, País\n");



for (i = 0; i < cantidad; i++) {
    printf("\033[2J");
    printMarco();

    gotoxy(12, 7);
    setColor("\033[7;35m");
    printf("Persona %d", i +1);
    setColor("\033[0m");
    

    gotoxy(12, 11);
    printf("Edad: ");
    gotoxy(18, 11);
    scanf("%d", &edad);
    getchar();
    gotoxy(12, 12);
    printf("Nombre: ");
    gotoxy(19, 12);
    fgets(nombre, MAX, stdin);
    nombre[strcspn(nombre, "\n")] = 0;

    gotoxy(12, 13);
    printf("País: ");
    gotoxy(18, 13);
    fgets(pais, MAX, stdin);
    nombre[strcspn(pais, "\n")] = 0;

    fprintf(file, "%s, %d, %s\n", nombre, edad, pais);
    
}
fclose(file);
printf("\033[2J");

file = fopen(archivo, "r");
    if (file == NULL){
        perror("Error al abrir al archivo");
        return 1;
        }

        printf("%-5s %-15s %-10s %-15s\n", "|  No. |", " Nombre     |", "Edad  |", " País    | ");
printf("------------------------------------------------------\n");


fgets(line, sizeof(line), file);

while (fgets(line, sizeof(line), file)) {
    line[strcspn(line, "\n")] = 0; 
    if (strlen(line) == 0) continue;
    line[strcspn(line, "\n")] = 0;

    token = strtok(line, ",");
    printf("| %-3d |", contador);

if (token != NULL) printf(" %-13s |", token);

token = strtok(NULL, ",");
if (token != NULL) printf(" %-6s |", token);

token = strtok(NULL, ",");
if (token != NULL) printf(" %-12s |", token);

printf("\n");
printf("----------------------------------------------------\n");

contador++; 
}


fclose(file);

        return 0;
}
