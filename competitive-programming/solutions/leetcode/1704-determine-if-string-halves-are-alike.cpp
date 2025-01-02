class Solution
{
public:
    bool isVowel(char &c)
    {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }

    bool halvesAreAlike(string s)
    {
        string a = s.substr(0, s.size() / 2);
        string b = s.substr(s.size() / 2);

        transform(a.begin(), a.end(), a.begin(), ::toupper);
        transform(b.begin(), b.end(), b.begin(), ::toupper);

        int vowelsMean = 0;

        for (int i = 0; i < a.size(); i++)
        {
            if (isVowel(a[i]))
                vowelsMean--;
            if (isVowel(b[i]))
                vowelsMean++;
        }

        if (vowelsMean != 0)
            return false;
        return true;
    }
};