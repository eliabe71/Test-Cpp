# Descrição
Teste de Dev C++ 
# Autor 
Eliabe Soares Santos.

# Exercício 1
Nesse exercício comecei definindo um vector de int que guarda os metros quadrados tipos de Comodo, utilizei essa estratégia pois como os tipos são de 0 à 4 as posições do vecrtor são iguais com isso, eu consigo acessar as médidas em tempo constante O(1) . Em sequência defini a classe Coodo(int: Type, height:float, widht, float), dentro desta classe tem os metódos para alterar o valor dos atribustos e as seguintes funções: calculaArea() que calcula a área do cômodo, lampada( ) que retorna o número de lâmpadas necessário para o problema. Abaixo descrevo um exemplo de entradas e saída, se o tipo adcionado for -1 o progama termina.

Entrada
4
20
20
Saída:
QTD de Lamapadas: 19

# Exercício 2
Nesse exercício comecei definindo a função Media(list: list<float>, best:float, wrost:float) que calcula a média dos elementos da lista, em seguida na função main crio as variáveis best e wrost que representam os melhor e o pior salto de um atleta e inicializo com o minimo float possével e máximo float possível respectivamente usei essa estratégia para comparar com os valores reais de algum atleta. Após adcionados todos os elementos na lista, chamo a função media nela somamos todos os elementos e subtraimos com os valores da variavel best e wrost e faço a média com o número de elementos da list menos 2 elementos. Abaixo um exemplo de entrada e saida, se o usuário não digitar o nome de um atleta o progama para

Entrada 

Eliabe

6.5

6.1

6.2

5.4

5.3

Saida

Melhor salto: 6.5 m

Pior salto: 5.3 m

Media dos demais saltos: 5.9 m

Eliabe: 5.9 m


# Exercício 3
Nesse exercício crio dois escopos: um que cria/abre um arquivo com nome aqr.txt nesse escopo o usuário pode digitar n-1 caracteres até o que o caractere n seja '0' onde eu fecho o arquivo e vou para o escopo seguinte, no outro escopo eu faco um laço de repetição com a função getLine() para coletar todos os caracteres adcionados no arquivos diferentes de '0' e printo no console. Abaixo mostro um exemplo de entrada e saída.

Entrada: 
a
s
d
f
0
Saida
asdf

# Exercício 4
Nesse exercício implemento o famoso algoritmo de ordenação BoubleSort este algoritmo é de complexidade O(n^2), sua maneira de funcionamento é pegar um par de elementos {a,b} contidos vetor se a for maior que b trocamos a posição de a com b dentro do Vetor. Abaixo Exemplo de entrada e saída
  
Entrada
5
3
2 
4
7
1
0 
6
Saída
0 1 2 3 4 5 6 7

# Como Compilar
No terminal digite g++ exN.cpp -o main sendo N o número do exercício.

