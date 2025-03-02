#include <stdio.h>
int main (){
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
}