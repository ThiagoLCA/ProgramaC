#include <stdio.h>

int main() {

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre com o numero 1:\n");
    scanf("%d", &numero1);

    printf("Entre com o numero 2:\n");
    scanf("%d", &numero2);

    // Agora sim, depois de ler os valores, fazemos as operações
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    if (numero2 != 0) {
        divisao = numero1 / numero2;
    } else {
        printf("Erro: divisão por zero!\n");
        return 0;
    }

    printf("A soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A Multiplicação é: %d\n", multiplicacao);
    printf("A Divisão é: %d\n", divisao);

    return 0;
}