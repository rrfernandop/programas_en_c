/**
* Programa que se encarga de crear un arreglo
* a partir de un tamaño indicado
*/

#include <stdio.h>

int main(){
    int size;
    printf("Ingrese el tamaño del arreglo \n");
    scanf("%d",&size);

    int arregloNumeros[size];

    for (int i =0; i<size; i++){
        printf("Ingrese el valor en posición [%d]: \n",i);
        int swap;
        scanf("%d",&swap);
        arregloNumeros[1] = swap;
    }

    //imprimiendo valores del arreglo
    for (int i= 0; i<size; i++){
        printf("arreglo[%d] = %d\n", i, arregloNumeros[i]);
    }
    return 0;
}
