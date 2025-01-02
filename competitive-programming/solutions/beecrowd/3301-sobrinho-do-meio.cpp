#include <stdio.h>

int main()
{
    int H, Z, L;
    scanf("%d %d %d", &H, &Z, &L);

    int valorDoMeio = (H + Z + L) / 3;

    if (Z == valorDoMeio)
    {
        printf("zezinho\n");
    }
    else if (H == valorDoMeio)
    {
        printf("huguinho\n");
    }
    else
    {
        printf("luisinho\n");
    }

    return 0;
}