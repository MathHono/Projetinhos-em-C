//  --Ler dois valores rederentes as notas escolares de -
// um aluno e apresentar se ele foi "reprovado" ou "aprovado"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Declaração variáveis
    float nota1, nota2, media; // declaracao de variaveis no tipo FLOAT, pois podem ser notas "picadas"

    //Entrada de dados

    printf("\n Seja bem-vindo ao media-calculator 2000"); // \n seve para pular uma linha
    printf("\n Insira a Primeira nota do Aluno:");
    scanf("%f", &nota1);
    printf("\n Insira a Segunda nota do Aluno:");
    scanf("%f", &nota2);

    // Processamento de dados

    media = (nota1 + nota2) / 2;

    //Saida de dados

    if (media <= 5)
    {
        printf("\n Seu aluno obteve a nota 1: %f a nota 2: %f e como resultado uma media de: %f", nota1, nota2, media);
        printf("\n Situacao: REPROVADO!");
    }
    else
    {
        printf("\n Seu aluno obteve a nota 1: %f a nota 2: %f e como resultado uma media de: %f", nota1, nota2, media);
        printf("\n Situacao: APROVADO!");
    }

    //FIM

    return 0;
}