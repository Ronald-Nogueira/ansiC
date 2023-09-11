/*1° questao - Ronald Nogueira*/

#include <stdio.h>
#include <math.h>

float numero, quadrado, cubo, raizQuadrada, raizCubica, resto;

int main() {
    
    //mensagem que pede ao usuario que digite um numero maior que zero
    printf("Digite um numero maior que zero: ");
    scanf("%f", &numero);
    


    //caso o numero seja menor ou igual a zero o programa retorna uma menssagem de erro
    if (numero <= 0) {
        printf("ERRO! O numero precisa ser maior que zero.\n");
        return 1;
    }

    // Calculo do número ao quadrado
    quadrado = numero * numero;
    printf("O numero digitado ao quadrado e: %.2f\n", quadrado);
    
    // Calculo do número ao cubo
    cubo = numero * numero * numero;
    printf("O numero digitado ao cubo e: %.2f\n", cubo);
    
    // Calculo da raiz quadrada do número
    raizQuadrada = sqrt(numero);
    printf("A raiz quadrada do numero digitado e: %.2f\n", raizQuadrada);
    
    // Calculo da raiz cúbica do número
    raizCubica = cbrt(numero);
    printf("A raiz cubica do numero digitado e: %.2f\n", raizCubica);
    
    // Calculo da divisão do número por 3
    resto = fmod(numero, 3);
    printf("O resto da divisao do numero digitado por 3 e: %.2f\n", resto);
    
    return 0;
}