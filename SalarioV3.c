#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    // Bloco 01.
    setlocale(LC_ALL, "");
    char nome[50];
    float sal1, sal2, media;

    printf("\nEste programa calcula a média salaria e faz coverção para EUR e USD\n");
    printf("\nDigite o nome do funcionário:\n");
    scanf("%50[^\n]s", &nome);

    printf ("\nDigite o salário do último mês em \nR$: ");
    scanf("%f", &sal1);

    printf ("\nDigite o salário do penúltimo mês em \nR$: ");
    scanf("%f", &sal2);

    media = (sal1 + sal2) / 2;
    printf("\nA média salarial do(a) %s é R$ %.2f\n\n", nome, media);

system("pause");

    // Bloco 02.
    float dolar, euro;
    float mediaDolar, mediaEuro;
    
    printf("\nValor do dolar atual:\nUSD: ");
    scanf("%f", &dolar);

    mediaDolar = (media * dolar);

    printf("\nA média salarial em USD é US$ %.2f\n\n", mediaDolar);

system("pause");
    
    printf("\nValo do euro atual:\nEUR: ");
    scanf("%f", &euro);

    mediaEuro = (media * euro);
    
    printf("\nA média salarial em EUR é E$ %.2f\n\n", mediaEuro);

system("pause");
    
    // Bloco 03.
    printf("\nRelatorio\n");
   
    printf("\nNome do funcionario: %s", nome);
    printf("\nMedia salarial BRL é R$ %.2lf", media);
    printf("\nSalario convertido em USD é US$ %.2f", mediaDolar);
    printf("\nSalario convertido em EUR é E$ %.2f\n\n", mediaEuro);

system("pause");

    return 0;
}