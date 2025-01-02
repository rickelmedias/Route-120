class Solution
{
public:
    double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();

        int total = n1 + n2;
        int middle = total / 2;

        int i = 0, j = 0;
        int current, prev;

        while (i + j <= middle)
        {
            prev = current;
            if (i < n1 && (j >= n2 || nums1[i] < nums2[j]))
            {
                current = nums1[i];
                i++;
            }
            else
            {
                current = nums2[j];
                j++;
            }
        }

        if (total % 2 == 0)
        {
            return static_cast<double>(prev + current) / 2.0;
        }
        else
        {
            return static_cast<double>(current);
        }
    }
};
