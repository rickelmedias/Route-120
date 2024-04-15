# Lista Ligada (Linked List)

Uma lista ligada é uma estrutura de dados linear, que consiste em um grupo de nós em uma sequência. Enquanto isso, uma array também armazena dados em forma linear. A diferença chave é que em uma array precisamos primeiro definir o tamanho, enquanto em uma lista ligada isso não é necessário.

| Comparações      | Array                                                                  | Lista Ligada                                                               |
| ---------------- | ---------------------------------------------------------------------- | -------------------------------------------------------------------------- |
| Tamanho          | Fixo                                                                   | Dinâmico                                                                   |
| Tamanho          | Se exceder o tamanho será necessário mudar estrutura inicial (custoso) | Cada elemento (nó) contém um ponteiro para o próximo elemento na sequência |
| Acesso           | Acesso flexível aos elementos com base no índice                       | Acesso sequencial aos elementos, não há acesso aleatório                   |
| Armazenamento    | Armazenamento contíguo na memória                                      | Armazenamento não contíguo na memória                                      |
| Inserção/Remoção | O conteúdo pode ser removido, mas persistirá ainda o elemento          | Inserção e remoção eficientes, especialmente no início e no meio da lista  |

## Tipos de Listas Ligadas

Existe mais de um tipo de listas ligada, aqui estão os tipos de listas ligadas:

### Lista Ligada Simples (Singly Linked List)

Cada nó aponta para o próximo nó e o último nó aponta para nulo.

<img src="https://github.com/RickelmeDias/Route-120/blob/main/assets/DSA/ll/Singly-Linked-by-GFG.png" alt="Singly Linked List, image from https://www.geeksforgeeks.org/types-of-linked-list/" width="500" />

### Lista Ligada Dupla (Doubly Linked List)

Cada nó tem dois ponteiros, um para o nó anterior e outro para o próximo nó.

<img src="https://github.com/RickelmeDias/Route-120/blob/main/assets/DSA/ll/Doubly-Linked-by-GFG.png" alt="Doubly Linked List, image from https://www.geeksforgeeks.org/types-of-linked-list/" width="500" />

### Lista Ligada Circular (Circular Linked List)

A última nó aponta de volta para o primeiro nó, formando um loop, ou seja, existe um ciclo nessa lista.

<img src="https://github.com/RickelmeDias/Route-120/blob/main/assets/DSA/ll/Circular-Linked-by-GFG.png" alt="Circular Linked List, image from https://www.geeksforgeeks.org/types-of-linked-list/" width="500" />

### Lista Ligada Duplamente Circular (Doubly Circular Linked List)

Cada nó tem ponteiros tanto para o próximo quanto para o nó anterior, e o último nó aponta para o primeiro, formando um loop duplo.

<img src="https://github.com/RickelmeDias/Route-120/blob/main/assets/DSA/ll/Doubly-Circular-by-GFG.png" alt="Doubly Circular Linked, image from https://www.geeksforgeeks.org/types-of-linked-list/" width="500" />

### Lista Ligada com Cabeçalho (Header Linked List)

Uma Lista Ligada com Cabeçalho é uma lista que possui um nó especial chamado de "nó de cabeçalho" no início. Esse nó não contém dados da lista, mas pode armazenar metadados, como o tamanho da lista. Isso facilita operações como a obtenção do tamanho da lista sem percorrer todos os elementos.

Esse tipo de lista pode ser _Grounded Header Linked List_ ou _Circular Header Linked List_, se quiser saber mais a fundo sobre esse tipo de lista recomendamos a leitura de [_"Header Linked List in C"_ no site Geeks for Geeks](https://www.geeksforgeeks.org/header-linked-list-in-c/).

<img src="https://github.com/RickelmeDias/Route-120/blob/main/assets/DSA/ll/Header-Linked-by-GFG.png" alt="Header Linked List, image from https://www.geeksforgeeks.org/types-of-linked-list/" width="500" />

Para entender melhor como implementar os tipos de listas mencionados anteriormente, confira o artigo no site de onde as imagens foram tiradas: *https://www.geeksforgeeks.org/types-of-linked-list/*. Lá, você encontrará explicações e implementações em código.

## Problemas de Lista Ligada

- [Encontrando Ciclos em Listas Ligadas (Linked List Cycle)](#ciclo-em-lista-ligada-linked-list-cycle)

### Ciclo em Lista Ligada (Linked List Cycle)

Como mostramos anteriormente em [_Lista Ligada Circular_](#lista-ligada-circular-circular-linked-list), podemos ter uma estrutura que contém um loop, ou também conhecido nesse caso com um _"ciclo"_, para detectar isso de forma simples, podemos utilizar uma técnica chamada _"Fast & Slow pointers"_, que consistem em criarmos dois ponteiros, um que irá andar lentamente (de um em um elemento) chamado slow, e outro que irá andar rapidamente (de dois em dois elementos), chamado fast. Se em algum momento o ponteiro fast e slow se encontrarem, significa que tem ciclo, em caso contrario o ponteiro fast será nullptr antes do slow, então faça essa checagem.

<details><summary>Animação explicativa:</summary>

Veja uma imagem animada desse funcionamento retirada de um artigo de Kushleen Waraich no site [Naukri](https://www.naukri.com/code360). Pense que o **azul* é o *fast pointer** e o **vermelho* é o *slow pointer**.

<img src="https://github.com/RickelmeDias/Route-120/blob/main/assets/DSA/ll/Two-Pointer-Approach-by-Naukri.gif" alt="Animação de https://www.naukri.com/code360/library/what-is-a-two-pointer-technique" width="500" />


</details></br>

> Implementação de [Fast & Slow Pointer em uma solução de problema do HackerRank](/competitive-programming/solutions/hackerrank/dsa/cycle-detection-ll.cpp)
