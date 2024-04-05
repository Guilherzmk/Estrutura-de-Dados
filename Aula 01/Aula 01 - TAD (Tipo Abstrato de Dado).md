# Aula 01 - TAD (Tipo Abstrato de Dado)

Tipo de dado: define o conjunto de valores (domínio) que uma variável pode assumir.

Ex: int.

-N …. -2, -1, 0, +1, +2 … +N

Estruturas de Dados: trata-se de um relacionamento lógico entre tipos de dados

Ex: Eu tenho uma struct com um float, char e um int e esses 3 juntos tem um significado.

Tipos Abstratos de Dados ou “TAD”: incluem as operações para a manipulação de dados.

Ex: além de incluir a struct com os tipos de dados teremos as operações responsáveis por esta estrutura como:

- Criação da estrutura
- Inclusão de um elemento
- Remoção de um elemento
- Acesso a um elemento

Vantagens: 

- Encapsulamento e Segurança: usuário não tem acesso direto aos dados.
- Flexibilidade e Reutilização: podemos alterar o “TAD” sem alterar as aplicações que o utilizam

Exemplo de TAD: arquivos em C

`FILE* f;`

Os dados de “f” somente podem ser acessados pelas funções de manipulação do tipo:

- `fopen()`
- `fclose()`
- `fputc()`
- `fgetc()`
- `feof()`
- …