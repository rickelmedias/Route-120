class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size(), findNum;

        map<int, int> mp;
        vector<int> v(2);

        for (int i = 1; i <= n; i++)
        {
            int index = i - 1;

            findNum = target - nums[index];

            if (mp[findNum])
            {
                v[0] = mp[findNum] - 1;
                v[1] = index;
                break;
            }

            mp[nums[index]] = i;
        }

        return v;
    }
};