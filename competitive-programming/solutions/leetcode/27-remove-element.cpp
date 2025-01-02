class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.size() == 1 && nums[0] == val)
            nums.pop_back();

        int i = 0;
        int j = nums.size() - 1;

        while (i <= j)
        {
            if (nums[i] == val)
            {
                swap(nums[i], nums[j]);
                j--;
                nums.pop_back();
            }
            else
                i++;
        }

        return nums.size();
    }
};