#pragma GCC optimize("03")
static int __star = []
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
    return 0;
}();

class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        int p1 = 0, p2 = 0;

        while (p1 < nums1.size() && p2 < nums2.size())
        {
            if (nums1[p1] == nums2[p2])
                return nums1[p1];

            if (nums1[p1] < nums2[p2])
                p1++;
            else
                p2++;
        }

        return -1;
    }
};