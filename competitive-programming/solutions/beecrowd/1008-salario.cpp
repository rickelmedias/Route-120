#include <stdio.h>

int main()
{

    double vhrs;
    int f, thrs;

    scanf("%d", &f);
    scanf("%d", &thrs);
    scanf("%lf", &vhrs);

    printf("NUMBER = %d\n", f);
    printf("SALARY = U$ %.2lf\n", thrs * vhrs);

    return 0;
}
