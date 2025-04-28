#include <stdio.h>

struct Direccion {
    char calle[50];
    int numero;
};

struct Persona{
    char nombre[50];
    struct Direccion domicilio;
};

int main () {
    int n;

    printf("Ingrese el numero de personas: ");
    scanf("%d",&n);
    getchar();

    struct Persona personas [n];

    for (int i=0; i<n; i++) {
        printf(" Ingrese los datos de la persona %d : ",i+1);

        printf("Nombre: ");
        scanf(" %[^ ]",personas[i].nombre);

        printf("Calle: ");
        scanf(" %[^ ]",personas[i].domicilio.calle);

        printf("Número: ");
        scanf(" %[^ ]",&personas[i].domicilio.numero);
        getchar();
    }

    printf(" %-20s | %-20s | %-10s ","Nombre","Direccion","Número");
    printf("---------------------------------------------------------- ");

    for (int i=0; i<n; i++){
        printf("%-20s | %-20s | %-10d ",
            personas[i].nombre,
            personas[i].domicilio.calle,
            personas[i].domicilio.numero);
            
    }
    
}