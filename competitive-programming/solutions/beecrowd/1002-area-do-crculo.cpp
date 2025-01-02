#include <stdio.h>
#include <math.h>

#define PI 3.14159
int main()
{
    double r, area;

    scanf("%lf", &r);

    area = PI * pow(r, 2);

    printf("A=%.4f\n", area);
    return 0;
}