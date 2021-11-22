#include <stdlib.h>
#include <stdio.h>

int main ()  
{

    /*  Dada a quantidade de alunos na turma, calcular a media semestral de cada 
    aluno da turma e mostrar uma mensagem para alunos aprovados */

    int   contador,  alunos;         // Sempre que trabalhar com laço de repetição While, deve-se - 
    float nota1 , nota2, media ;   //- denominar uma variável para atuar como contadora para os laços.


    // entrada de dados 
    printf ("\n ***** Seja Bem-vindo ao media calculator 3000*****");
    printf ("\n Insira o numero de alunos para calcular a media ");
    scanf ("%d",&alunos);
    contador = 1; //Aqui, devemos definir um valor para o start do contador. foi definido como 1.  
    
    
    //processamento de dados utilizando laço WHILE

        while (contador<= alunos)

                {
                    
                    printf("\n Insira o valor da primeira nota do aluno%d\n", contador);
                    scanf("%f",&nota1);
                    printf("\n Insira o valor da segunda nota do aluno%d\n", contador);
                    scanf("\n %f",&nota2);
                    media= (nota1*nota2)/2; 
                    printf("\n O aluno numero: %d, obteve a nota 1 = %.2f , nota 2 = %.2f  e uma media =%.2f",contador,nota1,nota2,media);
                    media= (nota1*nota2)/2; 
                        if (media>=6)

                            {
                                printf("\n A Situacao do aluno numero: %d, e' : APROVADO!", contador);
                            }
                        else
                            {
                               printf("\n A Situacao do aluno numero: %d, e' : REPROVADO!", contador );
                            }
                    contador++; 
                }

   return 0;
}