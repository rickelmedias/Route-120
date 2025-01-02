class Solution
{
public:
    int scoreOfString(string s)
    {
        int score = 0;

        for (int i = 0; i < s.size() - 1; i++)
        {
            char char1 = s[i];
            char char2 = s[i + 1];
            score += abs(char1 - char2);
        }

        return score;
    }
};