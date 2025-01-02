class Solution
{
private:
    const int INF = 1000000;

public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int n = (int)text1.size(), m = (int)text2.size();
        int i, j;
        vector<vector<int>> table(n + 1, vector<int>(m + 1, 0));

        // Insert/Delete = 0 point
        for (i = 1; i <= n; i++)
            table[i][0] = i * 0;
        for (j = 1; j <= m; j++)
            table[0][j] = j * 0;

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                table[i][j] = table[i - 1][j - 1] + (text1[i - 1] == text2[j - 1] ? 1 : -INF);
                table[i][j] = max(table[i][j], table[i - 1][j] - 0);
                table[i][j] = max(table[i][j], table[i][j - 1] - 0);
            }
        }

        return table[n][m];
    }
};