#include <stdio.h>
#include <stdbool.h>
int main()
{
   int numero;
   bool numero_valido = false;
   
   while(numero_valido == false){
       
       printf ("Digite um número entre 1 e 10: ");
       scanf("%i", &numero);
       
       if (numero>=1 && numero <=10){
    
    int contador =1;
    while (contador <=10){
        printf("%i X %i = %i\n", numero, contador, numero*contador);
        contador++;
    }
    numero_valido = true;
   }
   else{
       printf("Número inválido\n\n");
   }
}
}
