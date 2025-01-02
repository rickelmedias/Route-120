#include <stdio.h>
#include <math.h>

int maiorNumero(int A, int B)
{
    return (A + B + abs(A - B)) / 2;
}

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d eh o maior\n", maiorNumero(maiorNumero(A, B), C));
    return 0;
}