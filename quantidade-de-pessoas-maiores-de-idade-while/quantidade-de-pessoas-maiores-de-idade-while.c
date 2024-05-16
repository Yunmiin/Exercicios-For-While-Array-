#include <stdio.h>

int main()
{
    printf("Exercício - Quantidade de pessoas maiores de idade \n\n");
    
    int variavel_de_controle = 1, contador = 0, idade = 0;
   
    while(variavel_de_controle <= 5){
        printf("Pessoa %i - Digite a idade: ", variavel_de_controle);
        scanf("%i", &idade);
        
        if (idade > 18){
            //contador = contador + 1;
            contador ++;
        }
        variavel_de_controle ++;
    }
    
    printf("\nQuantidade de pessoas maiores de idade: %i", contador);
}