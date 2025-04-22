## Introdução 

A primeira ideia que tive ao olhar o problema durante a entrevista foi uma solução quadrática, e realmente foi a solução que implementei. Precisei da ajuda da internet para conseguir fazer esse algoritmo ser quadrático, pois conforme eu estava escrevendo a solução notei que a ideia que estava na minha cabeça começou tender para uma complexidade muito alta, especialmente por ser _"brute force"_. Como o problema não tinha cara de ser NP‑completo, eu parei para pensar melhor e refletir se ele poderia ser `O(n)`, logo descartei para poder entregar alguma solução e decidi pensar em algo que fizesse ser `O(n*m)`.

Como não consegui fugir de percorrer toda a matriz, tive que pensar em implementar algo que permitisse reutilizar valores anteriores, lembrei dos meus estudos de **programação dinâmica** para reaproveitar o que eu já havia calculado anteriormente, no caso desse problema os retângulos. A ideia de usar _DP_ veio de alguns estudos e implementações que eu ja havia feito em outros problemas, como: [Unique Binary Search Trees](https://github.com/rickelmedias/Route-120/blob/main/competitive-programming/solutions/leetcode/96-unique-binary-search-trees.py), mas há outros exemplos no meu [repositório de CP](https://github.com/rickelmedias/Route-120/tree/main/competitive-programming), não sei se cheguei a subir todos, um outro que fiz foi para conseguir aumentar a eficiência do algoritmo de fibonacci, podendo reaproveitar valores pré-calculados.

[Clique aqui para acessar o Main.java](./Main.java).

## Explicação

A ideia do algoritmo é passar por cada linha da matriz e usar três vetores representando até onde podemos formar um retângulo de `1`:

- `height[j]`: quantos `1` consecutivos existem na coluna `j` até a linha atual;
- `left[j]`: até onde podemos ir no eixo horizontal para esquerda sem ser `0`;
- `right[j]`: até onde podemos ir no eixo horizontal para a direita sem ser `0`.

Assim podemos calcular o retangulo possível que termina na linha atual e inclui aquela coluna.

1. Iniciando os valores de `right`
    -  No `for` da **linha 20** foi inicado os valores como `n`, pois o `right` precisa estar no final, diferente do `left` deve estar no inicio e o `height`.

2. Percorrendo as linhas
    - No `for` da **linha 24** foi percorrido linha a linha, e dentro dessa for existem outros 4 `for`, sao eles:
        - **`for` das alturas**: Esse `for` verifica se o valor na matriz é `1` ou `0`, se for `1` ele vai acrescentar `1` naquela coluna, se nao ele ira zerar a coluna;

        Exemplo:

        ```
        1 1 0           // 1 1 0
        1 1 1           // 2 2 1
        1 1 1           // 3 3 2
        ```

        Por exemplo, na posicao (2,0) temos o valor de altura sendo 3, ou seja, com isso conseguimos saber qual a altura que podemos formar um retangulo em cada ponto, agora precisamos saber o quanto ele pode se estender para esquerda e direitam, assim saberemos a altura, ou eixo vertical, precisamos encontrar sua dimensao horizontalmente, inicio e fim dele, podendo calcular o total de `1`;

        - **`for` esquerdo**: Esse `for` verifica o limite do `left`, enquanto ele for `1` ele vai continuar buscando pelo maior limite possivel para o tamanho daquele retangulo. Se for `0` entao sabemos que acabou aquele retangulo que estavamos olhando, entao vamos zerar e iniciar um novo retangulo na proxima coluna;

        - **`for` direito**: Esse `for` tem a mesma ideia do `left`, porem e usado para o `right`, como se trata de right ele começa na direita e vai indo para esquerda ate encontrar `0`, quando encontra um `0` ele reseta o ponteiro `right` para o valor inicial, nesse caso `n` ao inves de `0` como era no left e inicia um novo retangulo, enquanto for `1` ele continua seguindo com o limite;

        - **`for` para calcular a área**: Esse for ira pegar o maior valor entre o maior retangulo e o calculo daquele retangulo atual, ele ira manter sempre o maior retangulo dentro da variavel `biggestRect`.

### Complexidade

Como havia informaco, esse algoritmos pode ser considerado um algoritmos quadratico, porem como a matriz nao tem dimensoes iguais em sua linha e coluna, entao consideramos ele em sua complexidade de tempo como `O(m*n)`, e por conta de usar _dynamic programming_ a gente fez tambem um aumento sem sua complexidade de espaco para pelo menos `O(n)`.

### Construção

Esse algoritmo foi uma construção feita a partir de várias ideias que eu tive, partindo de ideias mais básicas, mas que não atendiam à minha necessidade de entregar algo plausível (com uma complexidade que fizesse sentido como `O(n*m)`). A evolução da construção desse algoritmo se deu principalmente pela minha vontade de querer entregar algo dentro das minhas condições mínimas de qualidade. A evolução técnica desse algoritmo se deu a partir do momento que tive novas ideias e comecei a explorar soluções que utilizavam de programação dinâmica. E, por fim, ler artigos e assistir vídeos sobre _finding maximum rectangle_. Posso dizer que esse algoritmo foi uma construção de pensamentos, se iniciando de ideias que tive e amadurecendo conforme ia estudando as soluções e conceitos de outros programadores. Por artigos e vídeos, eu cheguei a encontrar construções que usavam de conceitos um pouco mais matemáticos, porém fugiam da minha ideia de implementação inicial.

### Executando

Já rodei um `javac Main.java` para compilar, então basta rodar um `java Main` e irá executar o código. Os recursos utilizados da linguagem Java foram básicos, então não terá problemas com versões.

## Agradecimentos

Eu realmente gostei muito de desenvolver esse problema. No começo, ao analisar, parecia um problema mais fácil do que eu esperava, mas notei que tinha uma grande complexidade minhas ideias e precisei buscar outras ferramentas para resolver, pois fazer um _brute force_ apenas e entregar não me fazia sentir realizado com a entrega. Então, consegui bolar uma ideia utilizando _dynamic programming_. Infelizmente, meu conhecimento em _dp_ é bem fraco até o momento, mas eu consegui resolver lendo várias outras soluções de _find maximum rectangle_. Sei que a solução poderia ser mais simples, pois assim que terminei para entregar eu fui ler outras e me deparei com [essa](https://guides.codepath.org/compsci/Maximal-Rectangle), porém tentei deixar ao máximo com minha ideia inicial. Minha ideia inicial era apenas dois ponteiros ao invés de três: um `start` e um `end`, marcando as coordenadas de onde começa e termina cada retangulo, porém, eu tive muita dificuldade para conseguir construir o _dynamic programming_ em si, então tive que buscar algumas explicações de artigos e sites de desafios, e notei que para essa solução eu realmente precisava do `height`, o que quebrava totalmente minha ideia inicial de dois ponteireos apenas.

Eu, particularmente, pretendo fazer outras soluções, verificar se seria possível uma solução O(n), adianto que imagino que não, mas seria muito curioso se existisse. E também pretendo aplicar minha ideia de um ponteiro `start` e outro `end`, tentando viabilizar essa ideia para a complexidade `O(n*m)`, mas tambem adianto que imagino que não seja possível, e por fim, analisar a solução de outras pessoas.