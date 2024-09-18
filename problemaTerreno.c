#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor, preco;
    float area, larg, comp;
    int continuar;

    do{
        system("cls");

        printf("\nCalculos da area e Valor de um Terreno\n");

        printf("\n- Largura do Terreno\nM: ");
        scanf("%f", &comp);

        printf("\n- Comprimento do Terreno\nM: ");
        scanf("%f", &larg);

        area = (comp * larg);

        printf("\n- Valor do Metro\nR$: ");
        scanf("%f", &valor);

        printf("\n");

        preco = (area * valor);

    system("pause");

        printf("\nRESULTADO\n");
        printf("1- Largura: %.2f M2\n", larg);
        printf("2- Comprimento: %.2f M2\n", comp);
        printf("3- Valor M2: R$ %.2f\n", valor);
        printf("4- Area: %.2f M2\n", area);
        printf("5- Valor do Terreno: R$ %.2f\n\n", preco);

    system("pause");

       printf("\nDeseja Calcular Novamente? SIM (1) - Nao (0)\nOpcao: ");
       scanf("%d", &continuar);

       printf("\n");

    }while (continuar == 1);

system("pause");

    return 0;

}