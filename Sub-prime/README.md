# Sub-prime

## Informações

- **Nível:** 5
- **Tipo:** Ad-Hoc
- **Tempo Limite Base:** 1 Segundo(s)
- **Limite de Memória:** 200 MB
- **Feito por:** Maratona de Programação da SBC -> Brasil
- **Link:** https://judge.beecrowd.com/pt/problems/view/1105

## Contexto

A mais recente crise econômica foi em parte causada pela forma como os bancos faziam empréstimos para pessoas que não tinham capacidade de honrá-los e revendiam tais empréstimos para outros bancos (debêntures). Obviamente, quando as pessoas pararam de pagar os empréstimos, o sistema inteiro entrou em colapso.

A crise foi tão profunda que acabou atingindo países do mundo inteiro, inclusive a Nlogônia, onde o honrado primeiro ministro Man Dashuva ordenou que o presidente do Banco Central procurasse uma solução para o problema. Esse, por sua vez, teve uma idéia brilhante: se cada banco fosse capaz de liquidar seus empréstimos somente com suas reservas monetárias, todos os bancos sobreviveriam e a crise seria evitada. Entretanto, com o elevado número de debêntures e bancos envolvidos, essa tarefa é extremamente complicada, e portanto ele pediu a sua ajuda para escrever um programa que, dados os bancos e as debêntures emitidas, determine se é possível que todos os bancos paguem suas dívidas, utilizando suas reservas monetárias e seus créditos.

## Entrada

A entrada contém vários casos de teste. A primeira linha de um caso de teste contém dois inteiros B e N, indicando respectivamente o número de bancos (1 ≤ B ≤ 20) e o número de debêntures emitidas pelos bancos (1 ≤ N ≤ 20). Os bancos são identificados por inteiros entre 1 e B. A segunda linha contém B inteiros Ri separados por espaços, indicando as reservas monetárias de cada um dos B bancos (0 ≤ Ri ≤ 10^4, para 1 ≤ i ≤ B). As N linhas seguintes contêm cada uma três inteiros separados por espaços: um inteiro D, indicando o banco devedor (1 ≤ D ≤ B), um inteiro C, indicando o banco credor (1 ≤ C ≤ B e D ≠ C), e um inteiro V, indicando o valor da debênture (1 ≤ V ≤ 10^4).

O final da entrada é indicado por uma linha que contém apenas dois zeros, separados por um espaço em branco.

## Saída

Para caso de teste, seu programa deve imprimir uma única linha, contendo um único caractere: 'S', se for possível liquidar todos as debêntures sem intervenção do Banco Central da Nlogônia, e 'N', se algum banco precisar de empréstimos do governo para liquidar suas debêntures.

## Exemplo(s)

| Exemplos de Entrada     | Exemplos de Saída  |
| ----------------------- | ------------------ |
| 3 3 <br/> 1 1 1 <br/> 1 2 1 <br/> 2 3 2 <br/> 3 1 3 <br/> 3 3 <br/> 1 1 1 <br/> 1 2 1 <br/> 2 3 2 <br/> 3 1 4 <br/> 3 3 <br/> 1 1 1 <br/> 1 2 2 <br/> 2 3 2 <br/> 3 1 2 <br/> 0 0 | S <br/> N <br/> S |
