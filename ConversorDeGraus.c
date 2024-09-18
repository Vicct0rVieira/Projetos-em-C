#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float temp, res;
    int opcao, continuar;

    do{
        printf("\n[Conversor de Graus]\n");
        printf("\n[.] Qual modo de convers�o ser� usado?\n");
        printf("\n[1] Celsius");
        printf("\n[2] Fahrenheit\n\n[.] Op��o: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\n[A Escolha foi Celsius]\n");
            printf("\n[.] Qual � a temperatura?\nC: ");
            scanf("%f", &temp);

            printf("\n");

            res = (temp * 9/5) + 32;

        system("pause");

            printf("\n[RESULTADO]\n");
            printf("\n[%.2f] Celsius equivale a [%.2f] Fahrenheit.\n\n", temp, res);
        
        } else if (opcao == 2){
            printf("\n[A Escolha foi Fahrenheit]\n");
            printf("\n[.] Qual � a temperatura?\nF: ");
            scanf("%f", &temp);

            printf("\n");

            res = (temp - 32) * 5/9;

        system("pause");

            printf("\n[%.2f] Fahrenheit equivale a [%.2f] Celsius.\n\n", temp, res);
            
        } else {
            printf("!!!Op��o Invalida!!!");
        
        }

        printf("\nDeseja fazer outra conversao? [1] - Sim, [0] - Nao): \n[.] Op��o: ");
        scanf("%d", &continuar);
    
    system("pause");
        
    }while (continuar == 1);
    
    return 0;
}