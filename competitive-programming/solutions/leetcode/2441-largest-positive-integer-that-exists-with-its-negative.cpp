class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int res = -1;
        set<int> negatives;

        for (int n : nums)
        {
            if (negatives.find(-n) == negatives.end())
            {
                negatives.insert(n);
            }
            else
            {
                res = max(res, abs(n));
            }
        }
        return res;
    }
};