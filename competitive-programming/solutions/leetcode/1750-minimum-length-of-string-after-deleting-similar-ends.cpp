class Solution
{
public:
    int minimumLength(string s)
    {
        while (!s.empty() && s.front() == s.back() && s.size() != 1)
        {
            char prefixSuffix = s.front();
            while (!s.empty() && s.front() == prefixSuffix)
            {
                s.erase(0, 1);
            }
            while (!s.empty() && s.back() == prefixSuffix)
            {
                s.pop_back();
            }
        }

        return s.size();
    }
};