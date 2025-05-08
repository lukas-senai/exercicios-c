#include <stdio.h>

int main() {
    int opcao;

    printf("Opções de estados disponíveis para entrega:\n");
    printf("1 - SP\n");
    printf("2 - RJ\n");
    printf("3 - MJ\n");
    printf("4 - BA\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("O frete será R$20.00");
            break;
        case 2:
            printf("O frete será R$24.50");
            break;
        case 3:
            printf("O frete será R$40.25");
            break;
        case 4:
            printf("O frete será R$47.15");
            break;
        default:
            printf("Não realziamos entregas neste estado.");
    }
}
