#include <stdio.h>
int main (){

    float radio;
    float altura;
    float volumen;
    float pi=3.1416;
    float areatotal;
    float hipotenusa;

    printf("Dame el valor de la altura\n");
    scanf("%f",&altura);
    printf("%s\n","Dame el valor del radio");
    scanf("%f",&radio);

    hipotenusa=(radio*radio)+(altura*altura);
    areatotal=(pi*radio*radio)+(pi*radio*hipotenusa);
    volumen=(pi*radio*radio*altura)/3;
    
    printf("El volumen es: \n %f\n", volumen);
    printf("El area total es: \n %.2f \n",areatotal);

    return 0;
}