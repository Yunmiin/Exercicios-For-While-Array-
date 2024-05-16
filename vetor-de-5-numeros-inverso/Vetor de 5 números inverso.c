#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    // Lê os valores do vetor
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Exibe os elementos na ordem inversa
    printf("Elementos na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}