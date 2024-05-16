#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0.0;
    
    // Lê as notas
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    // Calcula a média
    float media = soma / 4;
    
    // Exibe as notas e a média
    printf("\nNotas digitadas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }
    printf("Média: %.2f\n", media);
    
    return 0;
}