#include <stdio.h>

int main() {

    // Criamos duas variáveis inteiras:
    // 'numero' vai guardar o número digitado pelo usuário
    // 'soma' começa em 0 e vai acumular o resultado da soma de 1 até o número digitado
    int numero, soma = 0;

    // Mostra uma mensagem na tela pedindo ao usuário para digitar um número e armazena na variável "numero"
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Aqui começa um laço (estrutura de repetição)
    // A variável 'i' começa valendo 1 e vai até o número digitado pelo usuário
    // A cada repetição, 'i' aumenta de 1 em 1 (i++)
    for(int i = 1; i <= numero; i++) {

        // A variável 'soma' vai acumulando os valores
        // Exemplo: se i vale 1, soma = 0 + 1 => soma vale 1
        // na próxima volta, i vale 2: soma = 1 + 2 => soma vale 3
        // depois: soma = 3 + 3 => soma vale 6... e assim por diante até 'i' chegar ao número digitado pelo usuário
        soma = soma + i;
    }

    // Depois que o laço termina, mostramos o resultado da soma na tela
    printf("A soma é %d", soma);

    return 0;
}
