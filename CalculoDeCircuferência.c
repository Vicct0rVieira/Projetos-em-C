#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Esse codigo calcula a area de uma circunferencia */
int main (void) {
    int continuar;
    double area, r;
    const double  pi = 3.14159;
    
    do{
        
    system("cls");
    
        // Input
        printf("Digite o raio da circunferencia em cm: ");
        scanf("%lf", &r);

        area = pi * (pow(r,2)) ;
        // Output
        printf("\nO resultado da area sera:%.2lf \n",area);


    printf("\n- Deseja calcular outra area??? \n[1] - Sim - [0] - Nao\nOpcao: ");
    scanf("%d", &continuar);

    } while (continuar == 1);

    return 0;
}