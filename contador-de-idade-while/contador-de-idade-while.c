#include <stdio.h>

int main () {
    int idade, contador = 0, i = 1;
    
    while (i <= 5) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf ("%d", &idade);
        
        if(idade > 18) {
            contador++;
            
        }
        
        i++;
        
    }
    
    printf("\nTotal de pessoas maiores de idade: %d\n", contador);
    
    return 0;
}
