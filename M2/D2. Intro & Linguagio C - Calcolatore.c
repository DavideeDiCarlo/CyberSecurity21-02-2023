#include<math.h>
#include<stdio.h>
/*
* Programma che calcola l area di un quadrato, di un cerchio e di un triangolo equilatero
*/

int main(){
 int scelta;
 float lato, raggio, base, altezza, area;
 const float PI=3.14519;

	printf("Selezionare una figura geometrica:\n");
	printf("1. Quadrato\n");
	printf("2. Cerchio\n");
 	printf("3. Triangolo\n");
	scanf("%d", &scelta);

 switch (scelta){
   case 1:
    printf("Inserisci la lunghezza del lato: \n");
    scanf("%f", &lato);
    area=lato*lato;
    printf("\nArea del quadrato:%f",area);
    break;
   case 2:
    printf("Inserisci la lunghezza del raggio: \n");
    scanf("%f", &raggio);
    area=raggio*raggio*PI;
    printf("\nArea del cerchio=%f",area);
    break;
   case 3:
    printf("\nInserisci la lunghezza della base:");
    scanf("%f", &base);
    printf("\nInserisci la l'altezza:");
    scanf("%f", &altezza);
    area=(base*altezza)/2.0;
    printf("\nL area del triangolo equilatero=%f",area);
    break;
   default:
    printf("Scelta non valida\n");
    break;
}
return 0;

}
