#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valorTotal, valorUn, valorForn;
    float troco, quant;

    printf("\n- Valor Unitario do Produto\nR$: ");
    scanf("%f", &valorUn);

    printf("\n- Quantidade Comprada do Produto\nQ: ");
    scanf("%f", &quant);

    valorTotal = (quant * valorUn);

    printf("\nValor Fornecido Pelo Comprador\nR$: ");
    scanf("%f", &valorForn);

    troco = (valorForn - valorTotal);

    if (valorForn < valorTotal ) {
        printf("Saldo Insuficiente. Falta a Pagar R$ %.2f\n\n", troco);

    } else {
        printf("Compra Aprovada.\nTroco: R$ %.2f\n\n", troco);

    }

system("pause");
    
    return 0;

}