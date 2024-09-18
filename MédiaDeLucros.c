#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float bruto, lucro, margemTotal;		

	printf("\n[Bem Vindo a Lucros.com ^-^]\n");
		
	printf("[Vamos calcular para voce a margem de lucros do seu neg�cio]\n");
		
	printf("\n[.] Qual foi o valor bruto do produto/servi�o?\nR$: ");
	scanf("%f", &bruto);

	printf("\n[.] Qual foi o valor do lucro?\nR$: ");
	scanf("%f", &lucro);

	margemTotal = (lucro / bruto * 100);

	printf("\n[.] A margem de lucros e de: %.2f", margemTotal,"\n");

	if(margemTotal > 17){
		printf("\n[Sua margem de lucro esta exelente :D]\n\n");
		
	} else {
		printf("\n[Margem abaixo de media :(]\n\n");
		
	}

system("pause");

	return 0;





}