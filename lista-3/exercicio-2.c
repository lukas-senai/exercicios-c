// Faça um programa que peça três números e imprima-os em ordem crescente.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    printf("Informe o terceiro número: ");
    scanf("%d", &num3);

    // Verifica se o primeiro é o menor número
    if(num1 < num2 && num1 < num3) {
        printf("%d ", num1);
    }
    // Verifica se o segundo é o menor número
    if (num2 < num1 && num2 < num3) {
        printf("%d ", num2);
    }
    // Verifica se o terceiro é o menor número
    if (num3 < num1 && num3 < num2) {
        printf("%d ", num3);
    }

    // Verifica se o primeiro é o número do meio
    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3)) {
        printf("%d ", num1);
    }
    // Verifica se o segundo é o número do meio
    if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3)) {
        printf("%d ", num2);
    }
    // Verifica se o terceiro é o número do meio
    if ((num3 > num2 && num3 < num1) || (num3 < num2 && num3 > num1)) {
        printf("%d ", num3);
    }

    // Verifica se o primeiro é o maior número
    if (num1 > num2 && num1 > num3) {
        printf("%d", num1);
    }
    // Verifica se o segundo é o maior número
    if (num2 > num1 && num2 > num3) {
        printf("%d", num2);
    }
    // Verifica se o terceiro é o maior número
    if (num3 > num2 && num3 > num1) {
        printf("%d", num3);
    }
}
