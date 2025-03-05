#include <stdio.h>

struct Persona {
    char nombre[50];   // Almacena nombres largos
    int edad;
    char correo[50];
    char telefono[20];
    char nac[30];  // Nacionalidad
    char genero[10];
    char direc[100];  // Dirección
    char enf[50];  // Enfermedad
};

int main() {
    int size;
    
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d", &size);

    struct Persona arregloPersona[size];  // Arreglo de estructuras

    // Captura de datos
    for (int i = 0; i < size; i++) {
        printf("\nIngrese los datos de la persona %d\n", i + 1);

        printf("Ingrese su nombre: \n");
        scanf(" %s", arregloPersona[i].nombre);  // Permite espacios

        printf("Ingrese su edad: \n");
        scanf("%d", &arregloPersona[i].edad);

        printf("Ingrese su correo: \n");
        scanf(" %49s", arregloPersona[i].correo);

        printf("Ingrese su telefono: \n");
        scanf(" %19s", arregloPersona[i].telefono);

        printf("Ingrese su nacionalidad: \n");
        scanf(" %s", arregloPersona[i].nac);

        printf("Ingrese su genero: \n");
        scanf(" %9s", arregloPersona[i].genero);

        printf("Ingrese su direccion: \n");
        scanf(" %s", arregloPersona[i].direc);

        printf("Ingrese enfermedad (si aplica): \n");
        scanf(" %s", arregloPersona[i].enf);
    }

    // Imprimir valores del arreglo
    printf("\nLista de personas registradas:\n");
    for (int i = 0; i < size; i++) {
        printf("\nPersona %d:\n", i + 1);
        printf("Nombre: %s\n", arregloPersona[i].nombre);
        printf("Edad: %d\n", arregloPersona[i].edad);
        printf("Correo: %s\n", arregloPersona[i].correo);
        printf("Telefono: %s\n", arregloPersona[i].telefono);
        printf("Nacionalidad: %s\n", arregloPersona[i].nac);
        printf("Genero: %s\n", arregloPersona[i].genero);
        printf("Direccion: %s\n", arregloPersona[i].direc);
        printf("Enfermedad: %s\n", arregloPersona[i].enf);
    }

    return 0;
}
