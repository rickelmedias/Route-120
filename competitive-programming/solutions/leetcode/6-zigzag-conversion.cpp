class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
            return s;

        vector<string> arr(numRows, "");

        int i = 0;
        int add = 1;

        for (char c : s)
        {
            arr[i].push_back(c);

            if (i == 0)
                add = 1;
            else if (i == numRows - 1)
                add = -1;

            i += add;
        }

        string res = "";
        for (string s : arr)
        {
            res += s;
        }

        return res;
    }
};