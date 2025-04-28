//Crear CSV 28/04/2025
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main (){
    FILE *file;
    char nombre[MAX];
    int edad;
    char pais[MAX];
    int cantidad, i;

    //abrir el archivo en modo escritura 
    // "r" Read "w" Write
    file = fopen("../2salida.csv", "w");
    if (file == NULL){
        perror("Error al crear el archivo");
        return 1;
        }


// Escribir encabezados 
fprintf(file, "Nombre, Edad, País\n");

printf("Cuantas personas quieres registrar?");
scanf("%d", &cantidad);
getchar();

for (i = 0; i < cantidad; i++) {
    printf("\nPersona %d\n", i +1);

    printf("Nombre: ");
    fgets(nombre, MAX, stdin);
    nombre[strcspn(nombre, "\n")] = 0;

    printf("Edad: ");
    scanf("%d", &edad);
    getchar();

    printf("País: ");
    fgets(pais, MAX, stdin);
    nombre[strcspn(pais, "\n")] = 0;

    fprintf(file, "%s, %d, %s\n", nombre, edad, pais);
    
}
fclose(file);

printf("\nArchivo 'salida.csv' creado exitosamente. \n");

return 0; 

}
