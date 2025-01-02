#include <stdio.h>

int main()
{

    char nome[100];
    double comiss, sal_fixo, vendas_din;
    gets(nome);
    scanf("%lf", &sal_fixo);
    scanf("%lf", &vendas_din);

    comiss = vendas_din * 0.15;

    printf("TOTAL = R$ %.2lf\n", comiss + sal_fixo);
    return 0;
}
