#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<set<int>> valPorCor(100000);
    int qtdBlocos, qtdCores;
    vector<int> seqCores(100000);

    cin >> qtdBlocos >> qtdCores;

    for (int i = 0; i < qtdBlocos; i++)
    {
        int num, cor;
        cin >> num >> cor;
        seqCores[i] = cor;
        valPorCor[cor].insert(num);
    }

    for (int bloco = 0; bloco < qtdBlocos; bloco++)
    {
        int cor = seqCores[bloco];
        if (valPorCor[cor].find(bloco + 1) == valPorCor[cor].end())
        {
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "Y" << endl;
    return 0;
}
