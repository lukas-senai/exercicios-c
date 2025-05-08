#include <stdio.h>

int main() {
    int temperatura;

    printf("Qual a temperatura atual em C°? ");
    scanf("%d", &temperatura);

    if (temperatura < 10) {
        printf("Está muito frio");
    }

    if (temperatura >= 10 && temperatura <= 20) {
        printf("Está frio");
    }

    if (temperatura >= 21 && temperatura <= 30) {
        printf("Está agradável");
    }

    if (temperatura > 30) {
        printf("Está quente");
    }
}
