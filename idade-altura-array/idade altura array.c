#include <stdio.h>

int main() {
    int i;
    float idade, altura;
    float vetor_idade[5];
    float vetor_altura[5];

    // Solicita ao usuário para digitar a idade e a altura de 5 pessoas
    for (i = 0; i < 5; i++) {
        printf("Digite a idade da %dª pessoa: ", i + 1);
        scanf("%f", &idade);
        printf("Digite a altura da %dª pessoa: ", i + 1);
        scanf("%f", &altura);

        vetor_idade[i] = idade;
        vetor_altura[i] = altura;
    }

    // Imprime a idade e a altura na ordem inversa à ordem lida
    printf("\nIDADES (na ordem inversa):\n");
    for (i = 4; i >= 0; i--) {
        printf("%.2f\n", vetor_idade[i]);
    }

    printf("\nALTURAS (na ordem inversa):\n");
    for (i = 4; i >= 0; i--) {
        printf("%.2f\n", vetor_altura[i]);
    }

    return 0;
}
