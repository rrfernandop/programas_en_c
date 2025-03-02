#include <stdio.h>
int main () {
    int opc;
    printf("%s\n","");
    printf("%s\n\n","Menú de programas | Unidad 1");
    printf("%s\n","Por favor, seleccione una opción");
    printf("%s\n","1.- Escapes");
    printf("%s\n","2.- Tipos de datos");
    printf("%s\n","3.- Promedio de calificaciones");
    printf("%s\n","4.- Temperatura (entero)");
    printf("%s\n","5.- Temperatura (flotante)");
    printf("%s\n","6.- Diagonales");
    printf("%s\n","7.- Cuadrado de numeros");
    printf("%s\n","8.- Cuadrado de asteriscos");
    printf("%s\n","9.- Triangulo rectangulo");
    printf("%s\n","10.- Triangulo rectangulo 2");
    printf("%s\n","11.- Triangulo equilatero");
    printf("%s\n","12.- Trapecio");
    printf("%s\n","13.- Tabla de multiplicar");
    printf("%s\n","14.- Promedio leer datos");
    printf("%s\n","15.- Volumen de una esfera");
    printf("%s\n","16.- Volumen de un cono");
    printf("%s\n","17.- Volumen de un cilindro");
    printf("%s\n","18.- Prueba switch");
    printf("%s\n","19.- Calculadora");
    scanf("%d", & opc);

    switch(opc){
        case 1:
        printf("%s\n","Ha selecionado Escapes\n"); 
        printf("\\a Alarma\n");
        printf("\\b Retroceso\n");
        printf("\\f Avance de pagina\n");
        printf("\\n Retorno de carro y avance de linea\n");
        printf("\\r Fetorno de carro\n");
        printf("\\t Tabulacion\n");
        printf("\\\\ Diagonal invertida\n");
        printf("\\? Signo de interrogacion\n");
        printf("\\"" Comillas dobles\n");
        printf("\\000 Octal\n");
        printf("\\xhh Hexadecimal\n");
        printf("\\0 Caracter nulo\n");
        break;
        case 2:
        printf("%s\n","Ha seleccionado Tipos de datos\n");
        printf("%s","%d imprime datos decimales: 5.4\n");
        printf("%s","%i imprime datos enteros: 2\n");
        printf("%s","%o imprime datos octales: 6\n");
        printf("%s","%x imprime datos hexadecimales: 8A1\n");
        printf("%s","%u imprime datos enteros sin signo en decimal: 23\n");
        printf("%s","%c imprime datos de caracteres: #\n");
        printf("%s","%e imprime datos reales expresados en base y exponente:5^2 \n");
        printf("%s","%f imprime datos reales escrito con punto decimal: 23.12\n");
        printf("%s","%f imprime datos reales : 14\n");
        printf("%s","%s imprime cadenas de caracteres: Hola123\n");
        printf("%s","%lf imprime datos reales de tipo long double: 2.1646466565466642\n");
        break;
        case 3:
        printf("%s\n","Ha seleccionado Promedio de calificaciones");
        int cal1 = 8, cal2 = 9, cal3 = 7;
             int promedio = (cal1 + cal2 + cal3) / 3;
             printf("Las calificaciones son: %.1d, %.1d, %.1d\n", cal1, cal2, cal3);
             printf("El promedio es: %.2dd\n", promedio);
             return 0;
        break;
        case 4:
        printf("%s\n","Ha seleccionado Tempreatura (entero)\n");
        int fahr, celsius;
        int lower, upper, step; 

        lower=0; 
        upper=300;
        step=20; 

        fahr = lower;
        while (fahr<=upper){ 
            celsius= 5*(fahr-32)/9; 
            printf("%d\t%d\n", fahr, celsius); 
            fahr = fahr + step; 
        } 
        break;
        case 5:
        printf("%s\n","Ha seleccionado Temperatura (flotante)");
        float fahr2, celsius2;
        float lower2, upper2, step2; 
    
        lower2 = 0; 
        upper2 = 300;
        step2 = 20; 
    
        fahr2 = lower2;
        while (fahr2 <= upper2) { 
            celsius2 = 5.0 * (fahr2 - 32.0) / 9.0; 
            printf("%.0f\t%.2f\n", fahr2, celsius2); 
            fahr2 = fahr2 + step2; 
        } 
        break;
        case 6:
        printf("%s\n","Ha seleccionado Diagonales\n");
        printf("%s","Diagonal normal:\n");
        int tamano = 10;
         for (int i = 0; i < tamano; i++) {
         for (int j = 0; j < tamano; j++) {
            if (i == j) {
                printf("%s","*");
            } else {
                printf("%s"," ");
            }
            }
        printf("%s","\n");
        }

        printf("%s","\n");
        printf("%s","Diagonal inversa:\n");
          for (int i = 0; i < tamano; i++) {
          for (int j = 0; j < tamano; j++) {
            if (i + j == tamano - 1) {
                printf("%s","*");
            } else {
                printf("%s"," ");
            }
            }
        printf("\n");
        }
         return 0;
        break;
        case 7:
        printf("%s\n","");
        break;
        case 8:
        printf("%s\n","");
        break;
        case 9:
        printf("%s\n","");
        break;
        case 10:
        printf("%s\n","");
        break;
        case 11:
        printf("%s\n","");
        break;
        case 12:
        printf("%s\n","");
        break;
        case 13:
        printf("%s\n","");
        break;
        case 14:
        printf("%s\n","");
        break;
        case 15:
        printf("%s\n","");
        break;
        case 16:
        printf("%s\n","");
        break;
        case 17:
        printf("%s\n","");
        break;
        case 18:
        printf("%s\n","");
        break;
        case 19:
        printf("%s\n","");
        break;
        default:
        printf("%s\n","No ha selecionado una opcion valida");
        break;
        

    }
   return 0;
}