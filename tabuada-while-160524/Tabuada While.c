#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um número entre 1 e 10: ");
    scanf("%i", &numero);
    
    if (numero >= 1 && numero <=10) {
        
        int contador =1;
        while (contador <=10) {
            printf("%i X %i = %i\n", numero, contador, numero* contador);
            contador = contador+1;
        }
    }
    else{
        printf("Número inválido");
    }
        }
    }
 