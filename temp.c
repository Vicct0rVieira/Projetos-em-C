#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) 
{
    float temp;
    
    printf("\n\nEste programaga diz as condições da temperatura atual\n");
    printf("\nInsira a temperatura: ");
    scanf("%f", &temp);

    if (temp < -9) {
        printf("\nClima Congelante!!!\n\n");

    } else if (temp <= 0) {
        printf("\nClima Gelado!!!\n\n");

    } else if (temp <= 7) {
        printf("\nClima Muito Frio!!!\n\n");

    } else if (temp <= 13) {
        printf("\nClima Fresco!!!\n\n");

    } else if (temp <= 18) {
        printf("\nClima Ameno!!!\n\n");

    } else if (temp <= 24) {
        printf("\nClima Agradavel!!!\n\n");

    } else if (temp <=29) {
        printf("\nClima Morno!!!\n\n");

    } else if (temp <=35) {
        printf("\nClima Quente!!!\n\n");

    } else if (temp >35) {
        printf("Ta Pegando Fogo Bixo!!!\n\n");
    }

    system ("pause");

    return 0;
}