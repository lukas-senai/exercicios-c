#include <stdio.h>

int main() {

    // Declara uma variável inteira 'num' que irá armazenar o número informado pelo usuário
    int num;

    // Exibe uma mensagem na tela pedindo para o usuário informar um número e salva na variável num
    printf("Informe um número: ");
    scanf("%d", &num);

    // Aqui começa o laço de repetição (for loop), onde 'i' vai começar de 1 e vai até o número 'num'
    // A cada repetição, 'i' aumenta em 1 (i++)
    for(int i = 1; i <= num; i++) {

        // Dentro do laço, temos uma condição (if)
        // O comando 'i % 2 == 0' verifica se o número 'i' é par
        if(i % 2 == 0) {
            // Se 'i' for par, mostramos o valor de 'i' na tela
            // O "\n" é a quebra de linha, para cada número impresso ser exibido em uma nova linha
            printf("\n%d", i);
        }
    }

    return 0;
}
