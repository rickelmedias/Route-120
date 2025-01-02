#include <stdio.h>
#include <math.h>
int main()
{
    double e;
    scanf("%lf", &e);
    printf("VOLUME = %.3lf\n", (4.0 / 3.0) * 3.14159 * pow(e, 3));
    return 0;
}
