
# 📘 Guia de Programação em C

Este guia apresenta os conceitos essenciais da programação em C, use e abuse para resolver os exercícios. 🚀

---

## 1. 🧮 Variáveis e Tipos

Variáveis são nomes que representam espaços na memória. Em C, os nomes devem seguir regras:

- Podem conter letras, números e underline (`_`)
- Não podem começar com número
- Não podem conter espaços ou acentos

✔️ Exemplos válidos:
```c
nomePessoa, preco_produto, salariobruto, valor1
```

❌ Exemplos inválidos:
```c
1valor, Nome Pessoa, saláriobruto, valor1°
```

Em C, você deve declarar o tipo da variável antes de usá-la.

### Tipos básicos mais comuns:

- `int` — armazena números inteiros (ex: 10, -5, 0) 🔢
- `float` — armazena números com ponto decimal (ex: 3.14, -0.5) 💧
- `char` — armazena um único caractere (ex: 'A', 'z', '?') 🔤

### Exemplo:

```c
int idade = 25;           // idade é um número inteiro
float altura = 1.75;      // altura com parte decimal
char letra = 'A';         // letra armazena um caractere
```

Você pode mudar o valor da variável durante o programa:

```c
idade = 30;
altura = 1.80;
```

---

## 2. 🤔 Estruturas Condicionais: if / else

Permite que o programa tome decisões, executando um bloco de código somente se uma condição for verdadeira.

### Sintaxe:

```c
if (condição) {
    // código executado se a condição for verdadeira
} else {
    // código executado se a condição for falsa
}
```

### Exemplo:

```c
int idade = 18;

if (idade >= 18) {
    printf("Você é maior de idade.\n");
} else {
    printf("Você é menor de idade.\n");
}
```

Aqui, o programa verifica se a idade é maior ou igual a 18. Se sim, mostra a mensagem "Você é maior de idade", caso contrário, mostra "Você é menor de idade".

---

## 3. 🔄 Estrutura Switch

O `switch` é usado quando queremos escolher entre várias opções baseadas no valor de uma variável.

### Sintaxe:

```c
switch (variável) {
    case valor1:
        // código para valor1
        break;
    case valor2:
        // código para valor2
        break;
    default:
        // código se nenhuma opção anterior for verdadeira
}
```

O `break` serve para sair do `switch` depois que um caso foi executado.

### Exemplo:

```c
int dia = 3;

switch (dia) {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    default:
        printf("Dia inválido\n");
}
```

Aqui, o programa imprime o nome do dia da semana baseado no número.

---

## 4. 🔁 Laço For

O `for` é usado para repetir um bloco de código um número determinado de vezes.

### Sintaxe:

```c
for (inicialização; condição; atualização) {
    // código repetido enquanto condição for verdadeira
}
```

- **Inicialização:** geralmente é onde definimos a variável de controle.
- **Condição:** enquanto essa condição for verdadeira, o laço continua.
- **Atualização:** modifica a variável de controle após cada repetição.

### Exemplo:

```c
for (int i = 0; i < 5; i++) {
    printf("Número %d\n", i);
}
```

Esse código imprime os números de 0 até 4.

---

## 5. 🔄 Laço While

O `while` executa um bloco de código enquanto a condição for verdadeira. A condição é verificada antes de executar o código.

### Sintaxe:

```c
while (condição) {
    // código executado enquanto condição for verdadeira
}
```

### Exemplo:

```c
int i = 0;

while (i < 5) {
    printf("Número %d\n", i);
    i++;
}
```

Aqui, o código imprime os números de 0 até 4, incrementando `i` a cada repetição.

---

## 6. 🔃 Laço Do While

Semelhante ao `while`, mas a condição é verificada **depois** da execução do bloco. Isso garante que o código execute pelo menos uma vez.

### Sintaxe:

```c
do {
    // código executado pelo menos uma vez
} while (condição);
```

### Exemplo:

```c
int i = 0;

do {
    printf("Número %d\n", i);
    i++;
} while (i < 5);
```

Esse código também imprime os números de 0 a 4, garantindo que o bloco seja executado antes de checar a condição.

---

# 📝 Resumo

| Estrutura    | Uso                              | Quando usar                               |
|--------------|---------------------------------|------------------------------------------|
| `int`, `float`, `char` | Armazenar dados               | Guardar números, caracteres, etc.        |
| `if / else`  | Condicional                     | Decidir entre caminhos diferentes        |
| `switch`     | Múltiplas opções                | Escolher ação entre vários casos         |
| `for`        | Repetição com número conhecido | Repetir algo X vezes                      |
| `while`      | Repetição com condição          | Repetir enquanto condição for verdadeira  |
| `do while`   | Repetição com condição          | Repetir pelo menos uma vez e depois verificar |

---
