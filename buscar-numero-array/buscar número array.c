#include <stdio.h>

int main() {
    float numeros[5];
    int i;
    
    // Solicita ao usuário para digitar 5 números
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    // Solicita ao usuário para digitar um número para busca
    float numero_busca;
    printf("Digite o número que deseja buscar: ");
    scanf("%f", &numero_busca);

    // Verifica se o número de busca está no array
    int encontrado = 0;
    for (i = 0; i < 5; i++) {
        if (numeros[i] == numero_busca) {
            encontrado = 1;
            break;
        }
    }

    if (encontrado) {
        printf("O número %.2f está presente no array.\n", numero_busca);
    } else {
        printf("O número %.2f não está presente no array.\n", numero_busca);
    }

    return 0;
}