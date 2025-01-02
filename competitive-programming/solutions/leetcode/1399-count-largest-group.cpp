class Solution
{
public:
    int countLargestGroup(int n)
    {
        map<int, int> m;
        int largest = 0;
        for (int i = 1; i <= n; i++)
        {
            string num = to_string(i);
            int sum = 0;

            for (char digit : num)
            {
                sum += digit - '0';
            }

            m[sum]++;
            largest = max(largest, m[sum]);
        }

        int count_largests = 0;

        for (const auto &p : m)
        {
            if (p.second == largest)
                count_largests++;
        }

        return count_largests;
    }
};