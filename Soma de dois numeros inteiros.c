#include <stdio.h>

int main()
{

    //Declaração de variaveis

    int num1, num2, conta, maior, menor, resultado;

    //entradad de dados
    printf("Este programa ira' exibir a soma de dois numeros inteiros. \n ");
    printf("Insira o primeiro numero");
    scanf("%d", &num1);
    printf("Insira o segundo numero");
    scanf("%d", &num2);

    //processamento de dados

    if (num1 > num2)

    {

        resultado = num1 - num2;

        printf("O Resultado da conta e': \n ");
        printf("\n %d ", resultado);
    }

    else
    {

        resultado = num2 - num1;

        printf("O Resultado da conta e': \n ");
        printf("\n %d ", resultado);
    }
    return 0;
}