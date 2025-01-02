class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        vector<int> freq(101, 0);
        int maxfreq = 1;

        for (auto n : nums)
        {
            freq[n]++;
            maxfreq = max(maxfreq, freq[n]);
        }

        int res = 0;
        for (auto f : freq)
            if (f == maxfreq)
                res += f;

        return res;
    }
};