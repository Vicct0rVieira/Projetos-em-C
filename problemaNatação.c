#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "");

    float t1, t2, t3;
    float media;
    int continuar;
        
    do{
        
    system("cls");

        printf("\n[M�dia de 03 (tr�s) tempos de um nadador]\n");
        
        printf("\n- Primeiro tempo:\n- ");
        scanf("%f", &t1);

        printf("\n- Segundo tempo:\n- ");
        scanf("%f", &t2);

        printf("\n- Terceiro tempo:\n- ");
        scanf("%f", &t3);

        media = (t1 + t2 + t3) / 3;

        printf("\nRESULTADO\n");
        printf("Primeiro Tempo [%.3f]\n", t1);
        printf("Segundo Tempo [%.3f]\n", t2);
        printf("Terceiro Tempo [%.3f]\n", t3);
        printf("Media dos Tempos [%.3f]\n\n", media);

    system("pause");

        printf("\n- Deseja calcular outra media?? \n[1] - Sim \n[0] - Nao\n[.] - Op��o: ");
        scanf("%d", &continuar);
        
    } while (continuar == 1);

    return 0;

}