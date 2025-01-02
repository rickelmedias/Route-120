#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    double n, a, b, c, delta;
    while (t--)
    {
        cin >> n;

        a = 1.0;
        b = 1.0;
        c = -2.0 * n;
        delta = pow(b, 2) - (4.0 * a * c);

        long long k = (long long)(((-b + sqrt(delta)) / (2.0 * a)));

        cout << k << endl;
    }

    return 0;
}