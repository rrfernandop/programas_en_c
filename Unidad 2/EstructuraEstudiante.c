#include <stdio.h>

struct Estudiante{
    char nombre[50];
    int edad;
    float promedio;
};

int main (){
    struct Estudiante estudiante1= {"Alejandro Díaz",24,8.5};
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("%.2f\n",estudiante1.promedio);
    return 0;
}