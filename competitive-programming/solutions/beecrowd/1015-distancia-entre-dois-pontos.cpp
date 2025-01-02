#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, r;

    scanf("%lf %lf\n", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    r = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);

    printf("%.4lf\n", r);
    return 0;
}
