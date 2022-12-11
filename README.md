# Jogo da Memória em C
### Trabalho da Universidade

* Construção do tabuleiro e disposição aleatória dos pares de cartas.

N=8

M=4

Dicas: considere MxM a dimensão da matriz a ser criada;

* Disposição aleatória das cartas ==&gt; srand(time(NULL)),
> i=rand()%M
>
> j=rand()%M

* Considere N cartas vet[‘A’, ‘B’, ‘C’, ‘D’, ‘E’, ‘F’, ‘G’, ‘H’]

N=8 Mat4x4

A E F B

D A F E

H D G H

G B C C


* Dicas de C:


#include &lt;stdio.h&gt;

#include &lt;time.h&gt;

#define N 8

#define M 4

char cartas[] = {‘A’, ‘B’, ‘C’, ‘D’, ‘E’, ‘F’, ‘G’, ‘H’};

char tab[M][M];

N=8 Mat4x4

x x x x

x x x x

x x x x

x x x x

Informe Linha e coluna: 1 3

2 1
