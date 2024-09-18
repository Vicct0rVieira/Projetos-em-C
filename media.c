#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char alunoNome[50];
    float mediaAluno;
    float N1, N2;
    float presenca;
    
    // Apresenta??o do COD
    printf("\n\n[Aqui calcularemos a media de alunos para ver se estar aprovado ou reprovado com a condicao das presencas]\n");
    
    // Entrada do nome do aluno
    printf("\n[.] Qual o nome do aluno?\n");
    scanf("%50[^\n]s", &alunoNome);

    // Entra de dados de presen?a e notas
    printf("\n[.] Qual e o percentual de presencas %s tem durante o semestre?\n", alunoNome);
    scanf("%f", &presenca);

    printf("\n[.] Nota final do primeiro bimestre?\n");
    scanf("%f", &N1);

    printf("\n[.] Nota final do segundo bimestre?\n");
    scanf("%f", &N2);

    mediaAluno = (N1 + N2) / 2;

    printf("\n"); 

system("pause");

    printf("\n[Relatorio Final]\n");
    
    printf("\n- Nota do primeiro bimestre: %.2f", N1);
    printf("\n- Nota do segundo bimestre: %.2f", N2);
    printf("\n- A media final e: %.2f\n", mediaAluno);
    printf("- O total de presencas e: %.2f", presenca);
    
    if (mediaAluno >= 60.00 && presenca >= 75.00){ 
        printf("\n[%s Estar Aprovado :D]\n\n", alunoNome);

    } else {
        printf("\n[%s Estar Reprovado :(]\n\n", alunoNome);
    }

system("pause");
    
    return 0;
  
}