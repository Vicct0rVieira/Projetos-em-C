// Este algortimo faz a verificação se a pessoa está apta a dirigir de acordo com a legislação vigente.
#include <stdio.h>

int main (void) 
{
    
    int idade;
    int continuar;
    do{
    system("cls");

    // Entrada de dados.
    printf("\nInforme sua idade : ");
    scanf("%d", &idade);
    
    // Condições.
    if (idade <=15) {
       printf("\nDe acordo com a legislacao vigente nao esta autorizado.\n");

    } else if (idade >=16 && idade <=17) {
        printf("\nDe acordo com a legislacao vigente\nJovens acima de 16 anos 'emancipados' tem permissao para dirigir.\n");

    } else {
        printf("\nDe acordo com a legislacao vigente pessoas alfabetizadas a partir dos 18 anos de idade estao aptas.\n");
    
    }    
        printf("\n- Deseja simular outra idade?\n[1] - Sim - [0] - Nao\nOpcao: ");
        scanf("%d", &continuar);

    } while (continuar == 1);
    
system("pause");

    return 0;

}