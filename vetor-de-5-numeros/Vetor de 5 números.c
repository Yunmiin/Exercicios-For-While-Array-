#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    // Lendo os valores do vetor
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Exibindo os valores do vetor
    printf("Valores do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}