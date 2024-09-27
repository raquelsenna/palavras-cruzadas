# Palavras Cruzadas 🆎
#### Desafio proposto no curso UML para Desenvolvimento de Software no SENAC. O desafio tem como finalidade desenvolver um algoritmo em C que lê e calcula a palavra dos jogadores e retorna o vencedor. 

## Como funciona?
#### É requisitado que 2 jogadores digitem uma palavra, cada letra da palavra possui um valor corresponde, como na tebela a seguir:
|A|B|C|D|E|F|G|H|I|J|K|L|M|N|O|P|Q |R|S|T|U|V|W|X|Y|Z |
|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|--|-|-|-|-|-|-|-|-|--|
|1|3|3|2|1|4|2|4|1|8|5|1|3|1|1|3|10|1|1|1|1|4|4|8|4|10|
#### Apóis isso o algoritmo passa por um processo de loop aninhado que faz a iteração e a pesquida da localização de determinada letra, que, uma vez encontrada, é adicionado o valor corresponde à letra ao contador responsável por fazer a soma dos pontos.
#### Utilizei arrays como forma de estrutura de dados e loop aninhado a fim de praticar.
#### Ganha o jogador que fizer mais pontos.

## Como Jogar?
#### Para compilar o código de forma mais simples e prática, é possível interagir pelo site [cs50.dev](http://cs50.dev/) que possui fácil manuseio, se assemelhando ao VsCode. Para compilar é necessário abrir o terminal, acessar a pasta atual e digitar, respectivamente:
- make nome-do-arquivo (precisa ser digitado a cada mudança feita no código para ser salvo)
- ./nome-do-arquivo (possibilita a interação com o código)

## Confira o Código Funcionado:
![Imagem do Código de Demonstração](https://github.com/user-attachments/assets/0291538e-e673-4d1e-9d6b-9672a41ae422)
