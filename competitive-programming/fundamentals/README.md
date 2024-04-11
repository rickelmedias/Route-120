# Fundamentos de Programação Competitiva 

![Imagem de uma Competição (ACM-ICPC World Finals)](/assets/CP0/programming-competition.png)

## Código Base

Usar `#include<bits/stdc++.h>` e using `namespace std;` pode facilitar a programação competitiva ao importar todas as bibliotecas padrão e evitar a repetição de `std::`. Porém, isso pode levar a conflitos de nomes e aumentar o tempo de compilação, ou seja, em projetos reais, é preferível importar apenas as bibliotecas necessárias e evitar o uso de `namespace std;` para manter o código mais limpo e evitar conflitos.

```cpp
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}
```


Além do código base acima temos um mais completo com macros, acesse: [base.cpp](./base.cpp).

## Casos comuns de entrada:

### Leia até o final (até não ter mais nada para ler):

```cpp
int a, b, c;

while(cin >> a >> b)
{
    c = a + b;
    cout << c << endl;
}
```

### Número pré determinado de leituras:

```cpp
int t, a, b, c;
cin >> t;

while(t--)
{
    cin >> a >> b;
    c = a + b;
    cout << c << endl;
}
```

## Possíveis erros:

- **[TLE]** Tempo Limite Excedido: Ocorre quando o algoritmo excede o tempo de execução. O principal problema com este erro é que ele não permite saber se sua solução alcançaria a solução correta ou não; geralmente indica que o algoritmo precisa ser otimizado.

- **[PE] ou [WA]** Erro de Apresentação: Alguns juízes não têm o Erro de Apresentação bem implementado, por exemplo, se você imprimir mais `\n` ou mais espaços do que o necessário, poderia retornar Resposta Errada em vez de Erro de Apresentação; é importante garantir a formatação correta da saída.

- **[WA]** Resposta Errada: Ocorre quando a resposta para os testes está incorreta, ou uma possível (PA); indica que a lógica ou implementação do algoritmo está errada e precisa ser corrigida.