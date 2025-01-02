#define MAXN 40005
#pragma GCC optimize("03")
static int __star = []
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
    return 0;
}();

class UnionFind
{
private:
    int parent[MAXN], size[MAXN];
    int N;

public:
    UnionFind(int N)
    {
        this->N = N;
        for (int i = 0; i < N; i++)
        {
            size[i] = 1;
            parent[i] = i;
        }
    }

    int find(int i)
    {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }

    void merge(int i, int j)
    {
        int x = find(i), y = find(j);
        if (x != y)
        {
            if (size[x] > size[y])
            {
                parent[y] = x;
                size[x] += size[y];
                size[y] -= size[y];
            }
            else
            {
                parent[x] = y;
                size[y] += size[x];
                size[x] -= size[x];
            }
        }
    }

    int findProvinces()
    {
        int provinces = 0;
        for (int i = 0; i < N; i++)
        {
            if (size[i] > 0)
                provinces++;
        }
        return provinces;
    }
};

class Solution
{
public:
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        UnionFind unf(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isConnected[i][j] == 1 && i != j)
                {
                    unf.merge(j, i);
                }
            }
        }

        return unf.findProvinces();
    }
};