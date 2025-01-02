class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s;
        vector<int> v;

        for (auto e : nums1)
            s.insert(e);
        for (auto e : nums2)
        {
            auto f = s.find(e);
            if (f != s.end())
            {
                s.erase(f);
                v.push_back(e);
            }
        }
        return v;
    }
};
