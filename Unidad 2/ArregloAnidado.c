#include <stdio.h>
struct Coordenadas
{
    char calle[50];
    char num[10];
    int cp;
};

struct Direccion
{
    char colonia[50];
    struct Coordenadas domicilio;
};

struct Estudiantes
{
    int id;
    char nombre[50];
    struct Direccion vivienda;
};

// datos 
int main(){

    int size;
    printf("Ingrese el tamaño de tu arreglo: ");
    scanf("%d",&size);

    struct Estudiantes arreglo[size];

    for (int i =0; i<size;i++){
        printf("\nIngrese los datos del estudiante %d\n",i+1);

        printf("id: \n");
        scanf("%d",&arreglo[i].id);

        printf("Nombre: \n");
        scanf("%s",&arreglo[i].nombre);

    
         printf("Colonia: \n");
         scanf("%s",&arreglo[i].vivienda.colonia);
 
        
         printf("Calle: \n");
         scanf("%s",arreglo[i].vivienda.domicilio.calle);
 
         
         printf("Numero: \n");
         scanf("%s",arreglo[i].vivienda.domicilio.num);
 
         printf("Codigo Postal: \n");
         scanf("%d",&arreglo[i].vivienda.domicilio.cp);
    }

    //impresiones 
    printf("\nEstudiantes:\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nEstudiante %d:\n", i + 1);
        printf("Id:%d\n", arreglo[i].id);
        printf("Nombre: %s\n", arreglo[i].nombre);

        printf("Direccion:\n Colonia: %s, Calle: %s, NumCasa: %s, Código Postal: %d\n",arreglo[i].vivienda.colonia, arreglo[i].vivienda.domicilio.calle,arreglo[i].vivienda.domicilio.num, arreglo[i].vivienda.domicilio.cp);
    }
    return 0;
}