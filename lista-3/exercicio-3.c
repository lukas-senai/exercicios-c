#include <stdio.h>

int main() {
    int opcao;

    printf("Escolha um dos seguintes itens:\n");
    printf("1 - Pão\n");
    printf("2 - Leite\n");
    printf("3 - Café\n");
    printf("4 - Bolo\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("R$1.50");
            break;
        case 2:
            printf("R$4.00");
            break;
        case 3:
            printf("R$6.00");
            break;
        case 4:
            printf("R$8.00");
            break;
        default:
            printf("Produto não encontrado.");
    }
}
