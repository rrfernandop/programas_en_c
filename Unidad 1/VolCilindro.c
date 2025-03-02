#include <stdio.h>
int main (){
    float h;
float radio;
float pi=3.1416;
float volumen;
float area;

printf("%s\n", "Ingresa el valor de la altura de tu cilindro");
scanf("%f", &h);
printf("%s\n", "Ingresa el radio de la circunferencia de tu cilindro");
scanf("%f", &radio);

volumen =(pi*radio*radio*h);
area = ((2*pi)*(radio*h)+(2*pi*radio*radio));

printf("%s%.4f\n", "El volumen es \n", volumen);
printf("%s%.2f\n", "El area es: \n", area);
return 0;
}