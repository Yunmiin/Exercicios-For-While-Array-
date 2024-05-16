#include <stdio.h>

int main() {
    int numeros[5];
    int par[5];
    int impar[5];
    int i, j = 0, k = 0;

    // Lê os 5 números inteiros
    for (i = 0; i < 5; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Separa os números pares e ímpares
    for (i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            par[j] = numeros[i];
            j++;
        } else {
            impar[k] = numeros[i];
            k++;
        }
    }

    // Imprime os vetores
    printf("Números pares: ");
    for (i = 0; i < j; i++) {
        printf("%d ", par[i]);
    }
    printf("\n");

    printf("Números ímpares: ");
    for (i = 0; i < k; i++) {
        printf("%d ", impar[i]);
    }
    printf("\n");

    return 0;
}