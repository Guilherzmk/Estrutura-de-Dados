# Aula 02 - Modularização e TAD

A convenção em linguagem C é preparar dois arquivos para implementar um “TAD”.

- Arquivo “.H”: protótipos das funções, tipos de ponteiro, e dados globalmente acessível
- Arquivo “.C”: declaração do tipo de dados e implementação das suas funções.

Assim separamos o “conceito” (definição do tipo) de sua “implementação”

Exemplo de “TAD”: um ponto definido por suas coordenadas “x” e “y”.

`struct ponto{`

`float x;`

`float y;`

`};` 

1º Passo: definir o arquivo “.H”

- protótipos das funções
- tipos de ponteiro
- dados globalmente acessível

![Untitled](Aula%2002%20-%20Modularizac%CC%A7a%CC%83o%20e%20TAD%20/Untitled.png)

2º Passo: definir o arquivo “.C”

- implementar as funções do protótipo

![Untitled](Aula%2002%20-%20Modularizac%CC%A7a%CC%83o%20e%20TAD%20/Untitled%201.png)

3º Passo: teste das implementações usando a main.c:

![Untitled](Aula%2002%20-%20Modularizac%CC%A7a%CC%83o%20e%20TAD%20/Untitled%202.png)

Resultado Final:

![Untitled](Aula%2002%20-%20Modularizac%CC%A7a%CC%83o%20e%20TAD%20/Untitled%203.png)