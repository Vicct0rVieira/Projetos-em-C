#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int glicose;

    printf("\n[.] Qual o nivel de glicose do paciente?\n");
    scanf("%d", &glicose);
    
    if (glicose > 100 && glicose <= 140) {
        printf("[.] Nivel de Glicose Elevada, procure se alimentar melhor\n");

    } else if (glicose > 140) {
        printf("[.] Diabetico, procure um médico\n");
        
    } else {
        printf("[.] Nivel de Glicose Normal, parabéns\n");

    }

    return 0;

system("pause");

}