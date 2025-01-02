/*
    Other possible solution for this problem.
    Outra solução possivel para o problema
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int maior = max(a, max(b, c));
    cout << maior << " eh o maior" << endl;
}