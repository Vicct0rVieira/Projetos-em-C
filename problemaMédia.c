#include <stdio.h>
#include <stdlib.h>

/* Código determina se um aluno estará aprovado ou reprovado de acordo com nota
maior ou igual a 6 e frequência escolar maior ou igual a 75% */ 

int main(void)
{
    char alunoNome[50]; 
    int continuar;
    float mediaAluno, presenca;
    float N1, N2;

    printf("\n[Aqui calcularemos a média de alunos para ver se está aprovado ou reprovado com a condição das presenças]\n");
        
    printf("\n[.] Qual o nome do aluno(a)?\n[R] ");
    scanf("%[^\n]s", alunoNome);

    printf("\n[.] Qual é o percentual de presenças do Aluno(a)?\n[R] ");
    scanf("%f", &presenca);

    printf("\n[.] Nota final do primeiro bimestre?\n[R] ");
    scanf("%f", &N1);

    printf("\n[.] Nota final do segundo bimestre?\n[R] ");
    scanf("%f", &N2);
    
    printf("\n");

    mediaAluno = (N1 + N2) / 2; 

    system("pause");

    printf("\n[Relatório Final]\n");
        
    printf("\n[1] Nome: %s", alunoNome);
    printf("\n[2] Nota do Primeiro Bimestre: %.2f", N1);
    printf("\n[3] Nota do Segundo Bimestre: %.2f", N2);
    printf("\n[4] Média Final: %.2f", mediaAluno);
    printf("\n[5] Total de Presenças: %.2f", presenca);
  
    if (mediaAluno >= 6.00 && presenca < 75.00) {
        printf("\n[6] Aluno reprovado por frequência :[\n\n");
        
    } else if (mediaAluno < 6.00 && presenca >= 75.00) {
        printf("\n[6] Aluno reprovado por nota :[\n\n");
        
    } else if (mediaAluno < 6.00 && presenca < 75.00) {
        printf("\n[6] Aluno reprovado por nota e frequência x[\n\n");

    } else {
        printf("\n[6] Aluno Aprovado :D\n\n");

    }
   
    system("pause");
     
    return 0;
}
