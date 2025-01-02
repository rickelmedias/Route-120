class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        int maxApple = 0;
        for (auto e : apple)
            maxApple += e;

        int n = sizeof(capacity) / sizeof(capacity[0]);
        sort(capacity.begin(), capacity.end(), greater<>());

        int maxCapacity = 0;
        int i = 0;
        for (auto c : capacity)
        {
            i++;
            maxCapacity += c;
            if (maxCapacity >= maxApple)
                break;
        }

        return i;
    }
};