/*4° questao - Ronald Nogueira*/

#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long fatorial;

    do {
        //o programa pede um numero inteiro e positivo ao usuario
        printf("Digite um numero inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Por favor, digite um numero inteiro positivo.\n");
        } else if (numero > 0) {
            fatorial = 1;

            // Calcula o fatorial do número
            for (i = 1; i <= numero; i++) {
                fatorial *= i;
            }

            printf("Numero: %d\n", numero);
            printf("Fatorial: %llu\n", fatorial);
        }

        
    } while (numero != 0);

    return 0;
}