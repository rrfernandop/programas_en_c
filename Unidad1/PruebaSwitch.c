#include <stdio.h>
int main () {
    int opc;
    printf("%s\n","Por favor, seleccione una opción");
    printf("%s\n","1.- Sumar");
    printf("%s\n","1.- Restar");
    scanf("%d", & opc);

    switch(opc){
        case 1:
        printf("%s\n","Ha selecionado suma");
        break;
        case 2:
        printf("%s\n","Ha selecionado resta");
        break;
        default:
        printf("%s\n","No ha selecionado una opcion valida");
        break;
    }
   else 0;
}