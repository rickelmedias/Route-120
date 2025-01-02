class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> vecr;
        priority_queue<int, vector<int>, greater<int>> pq;

        for (auto e : nums)
        {
            pq.push(e * e);
        }

        while (!pq.empty())
        {
            vecr.push_back(pq.top());
            pq.pop();
        }

        return vecr;
    }
};