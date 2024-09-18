#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int op, continuar;
    float n1, n2;
    float res;
    
    do{
        
    system("cls");

        printf("\nCalculadora das 4 operacoes\n");
        
        printf("[.] Qual operacao sera usada?\n\n");
        printf("(1)- Adicao\n");
        printf("(2)- Subtracao\n");
        printf("(3)- Divisao\n");
        printf("(4)- Multiplicacao\n\n- Operador: ");
        scanf("%d", &op);

        printf("\n");

        if (op == 1){
            printf("[.] Adicao\n");
            printf("\n- Qual o primeiro numero?\n- ");
            scanf("%f", &n1);

            printf("\n- Qual o segundo numero?\n- ");
            scanf("%f", &n2);

            res = (n1 + n2);

            printf("\n- Resuldado: [%.2f]\n", res);

        } else if (op == 2) {
            printf("[.] Subtracao\n");
            printf("\n- Qual o primeiro numero?\n- ");
            scanf("%f", &n1);

            printf("\n- Qual o segundo numero?\n- ");
            scanf("%f", &n2);

            res = (n1 - n2);

            printf("\n- Resuldado: [%.2f]", res);

        } else if (op == 3) {
            printf("[.] Divisao\n");
            printf("\n- Qual o primeiro numero?\n- ");
            scanf("%f", &n1);

            printf("\n- Qual o segundo numero?\n- ");
            scanf("%f", &n2);

            res = (n1 / n2);

            printf("\n- Resuldado: [%.2f]\n", res);
        
        } else if (op == 4) {
            printf("[.] Multplicacao\n");
            printf("\n- Qual o primeiro numero?\n- ");
            scanf("%f", &n1);

            printf("\n- Qual o segundo numero?\n- ");
            scanf("%f", &n2);

            res = (n1 * n2);

            printf("\n- Resuldado: [%.2f]\n", res);
 
        } else {
            printf("_Erro!_");
        
        }

        printf("\nDeseja fazer outra operacao?\n (1) Sim - (0) Nao\n");
        scanf("%d", &continuar);

    } while(continuar == 1);

system("pause");

    return 0;

}