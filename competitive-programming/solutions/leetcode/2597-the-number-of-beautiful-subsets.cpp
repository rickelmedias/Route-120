class Solution
{
public:
    int beautifulSubsets(vector<int> &nums, int k)
    {
        // Sort the array nums
        sort(nums.begin(), nums.end());

        int max_num = nums.back();
        cnt.resize(max_num + 1, 0);

        count = 0;

        backtrack(nums, k, 0);

        return count;
    }

private:
    vector<int> cnt;
    int count;

    void backtrack(const vector<int> &nums, int k, int start)
    {
        for (int i = start; i < nums.size(); ++i)
        {
            if ((nums[i] >= k && cnt[nums[i] - k] == 0) || nums[i] < k)
            {
                cnt[nums[i]]++;
                count++;
                backtrack(nums, k, i + 1);
                cnt[nums[i]]--;
            }
        }
    }
};
