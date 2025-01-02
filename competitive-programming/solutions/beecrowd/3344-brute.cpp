#include <stdio.h>
#include <string.h>

int number_name_size(int n);
void f(int *p, int qtd);

int main()
{
    int n;
    scanf("%d", &n);
    f(&n, 1000);
    printf("%d\n", n);
    return 0;
}

int number_name_size(int n)
{
    int size = 0;

    if (n == 0)
    {
        n -= 0;
        size += strlen("zero");
    }

    if (n == 100)
    {
        n -= 100;
        size += strlen("one hundred");
    }

    if ((n >= 90) && (n < 100))
    {
        n -= 90;
        size += strlen("ninety");
    }

    if ((n >= 80) && (n < 90))
    {
        n -= 80;
        size += strlen("eighty");
    }

    if ((n >= 70) && (n < 80))
    {
        n -= 70;
        size += strlen("seventy");
    }

    if ((n >= 60) && (n < 70))
    {
        n -= 60;
        size += strlen("sixty");
    }

    if ((n >= 50) && (n < 60))
    {
        n -= 50;
        size += strlen("fifty");
    }

    if ((n >= 40) && (n < 50))
    {
        n -= 40;
        size += strlen("forty");
    }

    if ((n >= 30) && (n < 40))
    {
        n -= 30;
        size += strlen("thirty");
    }

    if ((n >= 20) && (n < 30))
    {
        n -= 20;
        size += strlen("twenty");
    }

    if ((n >= 10) && (n < 20))
    {
        if (n == 10)
        {
            n -= 10;
            size += strlen("ten");
        }
        else if (n == 11)
        {
            n -= 11;
            size += strlen("eleven");
        }
        else if (n == 12)
        {
            n -= 12;
            size += strlen("twelve");
        }
        else if (n == 13)
        {
            n -= 13;
            size += strlen("thirteen");
        }
        else if (n == 14)
        {
            n -= 14;
            size += strlen("fourteen");
        }
        else if (n == 15)
        {
            n -= 15;
            size += strlen("fifteen");
        }
        else if (n == 16)
        {
            n -= 16;
            size += strlen("sixteen");
        }
        else if (n == 17)
        {
            n -= 17;
            size += strlen("seventeen");
        }
        else if (n == 18)
        {
            n -= 18;
            size += strlen("eighteen");
        }
        else
        {
            n -= 19;
            size += strlen("nineteen");
        }
    }

    if ((n >= 1) && (n < 10))
    {
        if (n == 1)
        {
            n -= 1;
            size += strlen("one");
        }
        else if (n == 2)
        {
            n -= 2;
            size += strlen("two");
        }
        else if (n == 3)
        {
            n -= 3;
            size += strlen("three");
        }
        else if (n == 4)
        {
            n -= 4;
            size += strlen("four");
        }
        else if (n == 5)
        {
            n -= 5;
            size += strlen("five");
        }
        else if (n == 6)
        {
            n -= 6;
            size += strlen("six");
        }
        else if (n == 7)
        {
            n -= 7;
            size += strlen("seven");
        }
        else if (n == 8)
        {
            n -= 8;
            size += strlen("eight");
        }
        else
        {
            n -= 9;
            size += strlen("nine");
        }
    }

    return size;
}

void f(int *p, int qtd)
{
    *p = number_name_size(*p);

    if (qtd > 0)
    {
        qtd--;
        return f(p, qtd);
    }
}