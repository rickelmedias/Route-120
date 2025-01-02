class Solution
{
public:
    bool isPalindrome(int x)
    {
        string num = to_string(x);
        int first = 0;
        int last = num.size() - 1;

        for (int i = 0; i < num.size() / 2; i++)
        {
            if (num[first + i] != num[last - i])
                return false;
        }
        return true;
    }
};