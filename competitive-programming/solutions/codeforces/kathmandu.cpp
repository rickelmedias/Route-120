#include <bits/stdc++.h>

using namespace std;

int main()
{

    int maxPeriodoDormindo = 0;
    char conseguiuDormir = 'N';

    int T, D, M;

    cin >> T >> D >> M;

    int periodoDormindo;
    int ultimoPeriodoDormindo = 0;

    if (M == 0)
    {
        if (T <= D)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
        return 0;
    }

    while (M--)
    {
        cin >> periodoDormindo;
        if (periodoDormindo - ultimoPeriodoDormindo > maxPeriodoDormindo)
        {
            maxPeriodoDormindo = periodoDormindo - ultimoPeriodoDormindo;
        }

        if (maxPeriodoDormindo >= T)
            break;

        ultimoPeriodoDormindo = periodoDormindo;
    }

    maxPeriodoDormindo = max(maxPeriodoDormindo, D - ultimoPeriodoDormindo);

    if (maxPeriodoDormindo >= T)
    {
        cout << "Y" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}