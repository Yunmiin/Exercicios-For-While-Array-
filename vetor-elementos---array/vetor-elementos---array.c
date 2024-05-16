#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    int i, j = 0;

    // Lê os valores para o primeiro vetor
    printf("Digite os 5 elementos do primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Lê os valores para o segundo vetor
    printf("Digite os 5 elementos do segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Preenche o terceiro vetor com os elementos intercalados
    for (i = 0; i < 5; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }

    // Imprime o terceiro vetor
    printf("Terceiro vetor (elementos intercalados):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }

    return 0;
}
