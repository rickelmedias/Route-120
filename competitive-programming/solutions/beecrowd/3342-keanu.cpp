#include <stdio.h>

int main()
{
    int n, p = 0, b = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
            {
                b = b + 1;
            }
            else
            {
                p = p + 1;
            }
        }
    }

    printf("%d casas brancas e %d casas pretas\n", b, p);

    return 0;
}
