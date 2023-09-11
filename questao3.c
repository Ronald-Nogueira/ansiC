/*3° questao - Ronald Nogueira*/

#include <stdio.h>

int menor, meio, maior;
int num1, num2, num3;
int opcao;

int main() {
    //O programa pede para que o usuario digite 3 numeros separados por espaço
    printf("Digite tres numeros inteiros positivos separados por espacos: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    //Ira escolher a opcao que deseja ver sua sequencia de numeros
    printf("Escolha uma das 3 opçoes:\n");
    printf("1 - Mostre os numeros digitados em ordem crescente\n");
    printf("2 - Mostre os numeros digitados em ordem decrescente\n");
    printf("3 - Mostre o menor numero entre os demais no meio dos 2 maiores\n");
    scanf("%d", &opcao);





    
    //Identificando qual opcao foi escolhida
    switch (opcao) {
        case 1: {
            if (num1 < num2 && num1 < num3) {
                menor = num1;
                if (num2 < num3) {
                    meio = num2;
                    maior = num3;
                } else {
                    meio = num3;
                    maior = num2;
                }
            } else if (num2 < num1 && num2 < num3) {
                menor = num2;
                if (num1 < num3) {
                    meio = num1;
                    maior = num3;
                } else {
                    meio = num3;
                    maior = num1;
                }
            } else {
                menor = num3;
                if (num1 < num2) {
                    meio = num1;
                    maior = num2;
                } else {
                    meio = num2;
                    maior = num1;
                }
            }
            printf("%d - %d - %d\n", menor, meio, maior);
            break;
        }
        case 2: {
            if (num1 > num2 && num1 > num3) {
                maior = num1;
                if (num2 > num3) {
                    meio = num2;
                    menor = num3;
                } else {
                    meio = num3;
                    menor = num2;
                }
            } else if (num2 > num1 && num2 > num3) {
                maior = num2;
                if (num1 > num3) {
                    meio = num1;
                    menor = num3;
                } else {
                    meio = num3;
                    menor = num1;
                }
            } else {
                maior = num3;
                if (num1 > num2) {
                    meio = num1;
                    menor = num2;
                } else {
                    meio = num2;
                    menor = num1;
                }
            }
            printf("%d - %d - %d\n", maior, meio, menor);
            break;
        }
        case 3: {
            if (num1 < num2 && num1 < num3) {
                menor = num1;
                if (num2 < num3) {
                    meio = num2;
                    maior = num3;
                } else {
                    meio = num3;
                    maior = num2;
                }
            } else if (num2 < num1 && num2 < num3) {
                menor = num2;
                if (num1 < num3) {
                    meio = num1;
                    maior = num3;
                } else {
                    meio = num3;
                    maior = num1;
                }
            } else {
                menor = num3;
                if (num1 < num2) {
                    meio = num1;
                    maior = num2;
                } else {
                    meio = num2;
                    maior = num1;
                }
            }
            printf("%d - %d - %d\n", maior, menor, meio);
            break;
        }
        //caso o usuario escolha uma opcao que nao esteja contida no programa 
        default:
            printf("Desculpe, essa opcao nao existe.\n");
    }

    return 0;
}