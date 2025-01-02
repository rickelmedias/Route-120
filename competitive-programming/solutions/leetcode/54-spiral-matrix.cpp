class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int totalSize = rowSize * colSize;

        vector<int> spiralOrder;
        vector<vector<bool>> visited(rowSize, vector<bool>(colSize, false));

        int row = 0;
        int rowStep = 0;

        int col = 0;
        int colStep = 1;

        while (totalSize--)
        {
            bool hasColisionRightBorderOrVisited = col + 1 >= colSize || visited[row][col + 1] == true;
            bool hasColisionLeftBorderOrVisited = col - 1 < 0 || visited[row][col - 1] == true;
            bool hasColisionDownBorderOrVisited = row + 1 >= rowSize || visited[row + 1][col] == true;
            bool hasColisionUpBorderOrVisited = row - 1 < 0 || visited[row - 1][col] == true;

            if (hasColisionRightBorderOrVisited && !hasColisionDownBorderOrVisited)
            {
                rowStep = 1;
                colStep = 0;
            }
            else if (hasColisionDownBorderOrVisited && !hasColisionLeftBorderOrVisited)
            {
                rowStep = 0;
                colStep = -1;
            }
            else if (hasColisionLeftBorderOrVisited && !hasColisionUpBorderOrVisited)
            {
                rowStep = -1;
                colStep = 0;
            }
            else if (hasColisionUpBorderOrVisited && !hasColisionRightBorderOrVisited)
            {
                rowStep = 0;
                colStep = 1;
            }

            spiralOrder.push_back(matrix[row][col]);
            visited[row][col] = true;

            row += rowStep;
            col += colStep;
        }

        return spiralOrder;
    }
};