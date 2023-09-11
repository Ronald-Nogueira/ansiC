/*2° questao - Ronald Nogueira*/

#include <stdio.h>

float hora;
int minutos, horas, segundos;


int main() {
    //Mensagem para o usuario digitar a hora e os minutos
    printf("Digite a hora (Horas.Minutos): ");
    scanf("%f", &hora);

    // Extrai a parte inteira (horas) e a parte decimal (minutos)
    horas = (int)hora;
    minutos = (int)((hora - horas) * 100); // Multiplicamos por 100 para converter a parte decimal em minutos

    // Calculo dos segundos
    segundos = (horas * 3600) + (minutos * 60); // Converte horas e minutos para segundos




    //caso a hora esteja entre 0 e 23 e os minutos entre 0 e 59 o programa imprime as horas e os minutos
    if (horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59) {
        printf("Hora em minutos: %d minutos\n", horas * 60 + minutos);
        printf("Hora em segundos: %d segundos\n", segundos);

    //se nao o programa retorna uma mensagem de erro
    } else {
        printf("Horas e minutos invalidos.\n");
    }

    return 0;
}