/** 
Se desea abrir un archivo de nombre LICENCIA . ES?' que no existe
para obtener ciertos datos.
 */
 #include <stdio.h>
 #include <stdlib.h>

 FILE *pf;
 char nm[]="./licencia.est";

 int main (){
    pf = fopen(nm, "r");
    if (pf == NULL){
        puts("Eror al abrir el archivo.");
        exit(1);
    }
    return 0;
 }