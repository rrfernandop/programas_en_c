#include <stdio.h>

int main() {
int ah, al, bh, bl, ch, cl, dh, dl;


printf("Ingrese valor AH: ");
scanf("%d", &ah);
printf("Ingrese valor AL: ");
scanf("%d", &al);
printf("Ingrese valor BH: ");
scanf("%d", &bh);
printf("Ingrese valor BL: ");
scanf("%d", &bl);
printf("Ingrese valor CH: ");
scanf("%d", &ch);
printf("Ingrese valor CL: ");
scanf("%d", &cl);


int *const pah = &ah;
int *const pal = &al;
int *const pbh = &bh;
int *const pbl = &bl;
int *const pch = &ch;
int *const pcl = &cl;
int *const pdh = &dh;

printf("\n\nValor A:\n\n");
printf("*AH: %d\n",*pah);
printf("&AH: %d\n", &ah);
printf("*AL: %d\n",*pal);
printf("&AL: %d\n", &al);
dh = *pah + *pal;
printf("Suma: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = *pah - *pal;
printf("Resta: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = *pah * *pal;
printf("Multiplicación: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = (*pah/ *pal);
printf("División: %d\n", *pdh);
printf("Posición: %d\n", &pdh);


printf("\n\nValor B:\n\n");
printf("*BH: %d\n",*pbh);
printf("&BH: %d\n", &bh);
printf("*BL: %d\n",*pbl);
printf("&bL: %d\n", &bl);
dh = *pbh + *pbl;
printf("Suma: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = *pbh - *pbl;
printf("Resta: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = *pbh * *pbl;
printf("Multiplicación: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = (*pbh/ *pbl);
printf("División: %d\n", *pdh);
printf("Posición: %d\n", &pdh);


printf("\n\nValor C:\n\n");
printf("*BH: %d\n",*pch);
printf("&BH: %d\n", &ch);
printf("*BL: %d\n",*pcl);
printf("&bL: %d\n", &cl);
dh = *pch + *pcl;
printf("Suma: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = *pch - *pcl;
printf("Resta: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = *pch * *pcl;
printf("Multiplicación: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
dh = (*pch/ *pcl);
printf("División: %d\n", *pdh);
printf("Posición: %d\n", &pdh);
    return 0;
}
