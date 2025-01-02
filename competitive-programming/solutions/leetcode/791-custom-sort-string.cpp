class Solution
{
public:
    string customSortString(string order, string s)
    {
        string res = "";

        for (int j = 0; j < order.size(); j++)
        {
            int i = 0;
            while (i < s.size())
            {
                if (order[j] == s[i])
                {
                    res += s[i];
                    s.erase(i, 1);
                }
                else
                {
                    i++;
                }
            }
        }
        res += s;

        return res;
    }
};
