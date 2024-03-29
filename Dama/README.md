# Dama

## Informações

- **Nível:** 4
- **Tipo:** Ad-Hoc
- **Tempo Limite Base:** 1 Segundo(s)
- **Limite de Memória:** 200 MB
- **Feito por:** Fábio Dias Moreira -> Brasil
- **Link:** https://judge.beecrowd.com/pt/problems/view/1087

## Contexto

O jogo de xadrez possui várias peças com movimentos curiosos: uma delas é a dama, que pode se mover qualquer quantidade de casas na mesma linha, na mesma coluna, ou em uma das duas diagonais, conforme exemplifica a figura abaixo:

![Movimento da Rainha](Rainha.png "Movimento da Rainha")

O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez: dada a posição de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 × 8, com 64 casas), de quantos movimentos, no mínimo, ela precisa para chegar em outra casa do tabuleiro?

Kary achou a solução para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que você escrevesse um programa que resolve esse tipo de problema.

## Entrada

A entrada contém vários casos de teste. A primeira e única linha de cada caso de teste contém quatro inteiros X1, Y1, X2 e Y2 (1 ≤ X1, Y1, X2, Y2 ≤ 8). A dama começa na casa de coordenadas (X1, Y1), e a casa de destino é a casa de coordenadas(X2, Y2). No tabuleiro, as colunas são numeradas da esquerda para a direita de 1 a 8 e as linhas de cima para baixo também de 1 a 8. As coordenadas de uma casa na linha X e coluna Y são (X, Y).

O final da entrada é indicado por uma linha contendo quatro zeros.

## Saída

Para cada caso de teste da entrada seu programa deve imprimir uma única linha na saída, contendo um número inteiro, indicando o menor número de movimentos necessários para a dama chegar em sua casa de destino.

## Exemplo(s)

| Exemplos de Entrada                               | Exemplos de Saída |
| ------------------------------------------------- | ----------------- |
| 4 4 6 2 <br/> 3 5 3 5 <br/> 5 5 4 3 <br/> 0 0 0 0 | 1 <br/> 0 <br/> 2 |
