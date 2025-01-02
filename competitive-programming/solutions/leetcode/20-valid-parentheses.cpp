class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, char> mp;
        mp[')'] = '(';
        mp[']'] = '[';
        mp['}'] = '{';

        stack<char> stak;

        for (char c : s)
        {
            if (stak.empty() || stak.top() != mp[c])
            {
                stak.push(c);
            }
            else
            {
                stak.pop();
            }
        }

        if (stak.size() > 0)
            return false;
        return true;
    }
};