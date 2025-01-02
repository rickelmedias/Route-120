class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        int n = grid.size();

        vector<vector<int>> resp(n - 2, vector<int>(n - 2, 0));
        int a = 0;
        int b = 0;

        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 1; j < n - 1; j++)
            {
                for (int k = i - 1; k < i + 2; k++)
                {
                    for (int m = j - 1; m < j + 2; m++)
                    {
                        resp[a][b] = max(grid[k][m], resp[a][b]);
                    }
                }
                b++;
            }
            a++;
            b = 0;
        }
        return resp;
    }
};