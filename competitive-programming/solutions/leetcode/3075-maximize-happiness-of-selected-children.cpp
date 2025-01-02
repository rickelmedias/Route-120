class Solution
{
public:
    long long maximumHappinessSum(vector<int> &happiness, int k)
    {
        sort(happiness.begin(), happiness.end(), greater<int>());
        // long long n=happiness.size()-1;
        long long next = 0, res = 0;

        for (int i = 0; i < k; i++)
        {
            int sum = happiness[i] - next;
            if (sum < 0)
                sum = 0;
            res += sum;
            next++;
        }

        return res;
    }
};