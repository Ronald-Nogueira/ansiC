/*5° questao - Ronald Nogueira*/

#include <stdio.h>

int i, idade, contador = 0, contador_altura_idade = 0;
float soma_idades = 0, media_idades, porcentagem;



int main() {
    
    for (i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);
        
        soma_idades += idade;

        printf("Digite o peso da pessoa %d em kg : ", i + 1);
        float peso;
        scanf("%f", &peso);
        
        printf("Digite a altura da pessoa %d em metros : ", i + 1);
        float altura;
        scanf("%f", &altura);

        if (peso > 80 && altura < 1.50) {
            contador++;
        }

        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            contador_altura_idade++;
        }
    }
    


    //calculo da media e da porcentagem
    media_idades = soma_idades / 10;
    porcentagem = ((float)contador_altura_idade / 10) * 100;
    
    printf("Média das idades: %.2f\n", media_idades);
    printf("Pessoas com peso maior que 80kg e altura menor que 1,50m: %d\n", contador);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos e altura maior 1,90m: %.2f%%\n", porcentagem);
    
    return 0;
}