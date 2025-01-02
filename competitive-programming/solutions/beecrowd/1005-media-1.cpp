#include <stdio.h>

int main()
{

    double a, b, r;

    scanf("%lf", &a);
    scanf("%lf", &b);

    r = (a * 3.5 + b * 7.5) / 11;

    printf("MEDIA = %.5lf\n", r);
    return 0;
}
