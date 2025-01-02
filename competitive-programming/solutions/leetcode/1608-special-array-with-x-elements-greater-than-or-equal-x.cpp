class Solution
{
public:
    int specialArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        for (int x = 1; x <= nums.size(); x++)
        {
            auto lower = lower_bound(nums.begin(), nums.end(), x);
            auto upper = nums.end();
            int count = upper - lower;

            if (count == x)
            {
                return count;
            }
        }
        return -1;
    }
};