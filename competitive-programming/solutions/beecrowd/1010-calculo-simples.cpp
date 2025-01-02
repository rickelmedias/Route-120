#include <stdio.h>

int main()
{
    int cod_peca, qtde_peca;
    double valor_peca, total;
    scanf("%d %d %lf", &cod_peca, &qtde_peca, &valor_peca);
    total += qtde_peca * valor_peca;
    scanf("%d %d %lf", &cod_peca, &qtde_peca, &valor_peca);
    total += qtde_peca * valor_peca;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
