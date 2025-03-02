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
        printf("%s\n","Ha seleccionado Cuadro de numeros\n");
        printf("\n%s\n", "Ejemplo de impresion");
        int limitesy =0;
            while (limitesy <= 10) {
                int limitesx = 0;
                while (limitesx <= 10){
                    printf("%4d", limitesx);
                    limitesx++;
                }
                    printf("\n");
                    limitesy++;
            }
        break;
        case 8:
        printf("%s\n","Ha seleccionado cuadrado de asteristcos");
        for (int a=0;a<=9;a++){
            printf("%3s","*");
        }
        printf("\n");
        for(int b=1;b<=7;b++){
            printf("%3s","*");
    
            for (int c=1;c<=8;c++){
                printf("%3s","");
            }
    
            printf("%3s","*");
            printf("\n");
    
        }
        for (int a=0;a<=9;a++){
            printf("%3s","*");
        }
    return 0;
        break;
        case 9:
        printf("%s\n","Ha seleccionado triangulo rectangulo");
        int asteriscos=1;
          for (int i3=6 ; i3>=0;i3--) {
          for (int k3=6; k3>= asteriscos; k3--){
          printf("%5s", " ");
        }
          for (int j3=1; j3<= asteriscos; j3++) {
          printf("%5s", "*");
        }
          asteriscos++;
          printf("\n");
        }
        return 0;  
        break;
        case 10:
        printf("%s\n","Ha seleccionado Triangulo rectangulo 2");
        int asteriscos2=1;
            for (int i2=6 ; i2>=0;i2--) {
            for (int j2=1; j2<= asteriscos2; j2++) {
            printf("%5s", "*");
            } 
            asteriscos2++;
            printf("\n");
            }
            return 0;
        break;
        case 11:
        printf("%s\n","Ha seleccionado Triangulo equilatero");
        int espacios1=6 ; int asteriscos1=1;
             for (int i1=6; i1>=0; i1--) {
             for (int j1=1; j1<=espacios1; j1++) {
             printf ( "%4s", "");
            }   
            espacios1--;
             for (int k1=1; k1<=asteriscos1; k1++){
             printf ("%4s", "*");
            }
             asteriscos1=asteriscos1+2;
             printf ("\n");
            }
            return 0; 
        break;
        case 12:
        printf("%s\n","Ha seleccionado Trapecio\n");
        int espacios= 3;
        int asterisco = 3;
        for(int i=3; i>=0; i--){
            for(int j=1; j<= espacios; j++){
                printf("%4s"," ");
            }
            espacios--;
            for(int k=1; k<=asterisco; k++){
                printf("%4s","*");
            }
            //asterisco = asterisco + 2;
            asterisco +=2;
            printf("\n");
            
        }
        break;
        case 13:
        printf("%s\n","Ha seleccionado Tabla de multiplicar");
        int tabla = 0;
        while(tabla <=10){
            int numero = 0;
            printf("%s\n\n","");
            while (numero<= 10){
                int mul = (numero * tabla);
                                                                                        
                printf("%s%d%s%d%s%d\n", "(",tabla,")()",numero,")=",mul);
                numero++;
            }
        
            tabla++;
        }
        break;
        case 14:
        printf("%s\n","Ha seleccionado Promedio leer datos");
        char nombre2 [50];
    printf("%s\n","Ingrese su nombre");
    scanf("%s",& nombre2);

    int calif1; 
    printf("%s\n","Ingrese calif1");
    scanf("%d",&calif1);


    int calif2; 
    printf("%s\n","Ingrese calif2");
    scanf("%d",&calif2);

    int calif3; 
    printf("%s\n","Ingrese calif3");
    scanf("%d",&calif3);

    float promedio2 = (calif1+calif2+calif3)/3;
    //Resultados
    printf("%s%s\n","Nombre: ",nombre2);
    printf("%s%.2f\n","Promedio: ",promedio2);

    if (promedio2 >=6){
        printf("%s\n","APROBADO");
    } else {
        printf("%s\n","REPROBADO");
    }
        break;
        case 15:
        printf("%s\n","He seleccionado Volumen de una esfera");
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
        break;
        case 16:
        printf("%s\n","Ha seleccionado Volumen de un cono");
        float radion;
        float alturan;
        float volumenn;
        float pin=3.1416;
        float areatotaln;
        float hipotenusan;

        printf("Dame el valor de la altura\n");
        scanf("%f",&alturan);
        printf("%s\n","Dame el valor del radio");
        scanf("%f",&radion);

        hipotenusan=(radion*radion)+(alturan*alturan);
        areatotaln=(pin*radion*radion)+(pin*radion*hipotenusan);
        volumenn=(pin*radion*radion*alturan)/3;
        
        printf("El volumen es: \n %f\n", volumenn);
        printf("El area total es: \n %.2f \n",areatotaln);
        return 0;
        break;
        case 17:
        printf("%s\n","Ha seleccionado Volumen de un cilindro");
        float hc;
        float radioc;
        float pic=3.1416;
        float volumenc;
        float areac;

        printf("%s\n", "Ingresa el valor de la altura de tu cilindro");
        scanf("%f", &hc);
        printf("%s\n", "Ingresa el radio de la circunferencia de tu cilindro");
        scanf("%f", &radioc);

        volumenc =(pic*radioc*radioc*hc);
        areac = ((2*pic)*(radioc*hc)+(2*pic*radioc*radioc));

        printf("%s%.4f\n", "El volumen es \n", volumenc);
        printf("%s%.2f\n", "El area es: \n", areac);
        return 0;
        break;
        case 18:
        printf("%s\n","Ha seleccionado Prueba switch");
        int opc;
    printf("%s\n","Por favor, seleccione una opción");
    printf("%s\n","1.- Sumar");
    printf("%s\n","2.- Restar");
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
   return 0;
        break;
        case 19:
        printf("%s\n","Ha seleccionado Calculadora");
        float num1, num2;
    int ope;
    float resultado;
    printf("%s", "BIENVENIDO A LA CALCULADORA");
    printf("%s", "Ingresa el numero 1: ");
    scanf("%f", &num1);
    printf("%s", "Ingresa el numero 2: ");
    scanf("%f", &num2);

    printf("%s\n", "Indica una operación");
    printf("%s\n", "1: Sumar");
    printf("%s\n", "2: Restar");
    printf("%s\n", "3: Multiplicar");
    printf("%s\n", "4: Division");
    scanf("%d", &ope);

    switch(ope){
        case 1:
            resultado=num1+num2;
            printf("%s\n%.5f", "El resultado de los dos numeros sumados es:", resultado);
            break;

        case 2:
            resultado=num1-num2;
            printf("%s\n%.5f", "El resultado de los numeros restados es:", resultado);
            break;

        case 3:
            resultado=num1*num2;
            printf("%s\n%.5f", "El resultado de la multiplicación es:", resultado);
            break;
            
        case 4:
            resultado=num1/num2;
            printf("%s\n%.5f", "El resultado de la division es:", resultado);
            break;

        default:
            printf("%s", "Selecciona un caracter correcto");
            break;
    }
return 0;
        break;
        default:
        printf("%s\n","No ha selecionado una opción valida");
        break;
        

    }
   return 0;
}