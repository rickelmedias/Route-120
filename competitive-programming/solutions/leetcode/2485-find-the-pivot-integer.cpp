class Solution
{
public:
    int pivotInteger(int n)
    {
        if (n == 1)
            return 1;

        for (int i = 2; i <= n - 1; i++)
        {
            // left
            int sumLeft = 0;
            for (int j = 1; j <= i - 1; j++)
            {
                sumLeft += j;
            }
            // right
            int sumRight = 0;
            for (int k = i + 1; k <= n; k++)
            {
                sumRight += k;
            }

            if (sumLeft == sumRight)
                return i;
        }

        return -1;
    }
};
