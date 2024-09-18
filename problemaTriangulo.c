#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL,"");

    float b, h, area;

    printf("\n[Vamos descobrir a area triangulo]\n");
   
    printf("\n[.] Qual a medida da base?\nB: ");
    scanf("%f", &b);

    printf("\n[.] Qual a medida da altura?\nH: ");
    scanf("%f", &h);

    area = (b * h) / 2;

    float l1, l2;

    printf("\n[Agora iremos ver o quesito de classificacao desse triangulo]\n");

    printf("\n[.] Qual a medida do lado 01?\nL1:");
    scanf("%f", &l1);

    printf("\n[.] Qual a medida do lado 02?\nL2:");
    scanf("%f", &l2);

    printf("\nA area do triangulo e [%.2f]\n", area);

    if(l1 = l2 && l1 != b && l2 != b){
        printf("[Triangulo Esoceles]\n\n");
    
    } else if (l1 != l2 && l1 != b && l2 != b){
        printf("[Triangulos Escaleno]\n\n");
    
    } else if (l1 = b = l2 = b){
        printf("Triangulo Equilatero\n\n");
    
    }

system("pause");
    
    return 0;

}