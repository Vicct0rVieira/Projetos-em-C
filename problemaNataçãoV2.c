#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    
    // Array para armazenar os tempos
    float tempo[2];
    float media;
    int i;
    int continuar;

    do{
        
    system("cls");

        // Pede ao usuário para inserir os três melhores tempos e armazena-os no array
        for (i = 0; i <= 2; i++) {
            printf("Insira o tempo %d: ", i + 1);
            scanf("%f", &tempo[i]);
        }

        // Exibe os tempos inseridos
        printf("\n[.] RESULTADOS\n");
        printf("[1] Primeiro Tempo: %.2f\n", tempo[0]);
        printf("[2] Segundo Tempo: %.2f\n", tempo[1]);
        printf("[3] Terceiro Tempo: %.2f\n", tempo[2]);

        // Calcula a média
        media = (tempo[1] + tempo[2] + tempo[3]) / 3;

        // Média dos tempos
        printf("[4] Media dos Tempos: %.2f\n", media);

    printf("\n- Deseja calcular outra media?? \n[1] - Sim \n[0] - Nao\nOpcao: ");
    scanf("%d", &continuar);

    }while (continuar == 1);

system("pause");

    return 0;

}