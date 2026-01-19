#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipocomparacao;

    // Gerar número aleatório

    srand (time(0));
    numeroComputador = rand () %100 +1; // Número entre 1 e 100

    // Início do JOGO

    printf ("Bem vindo ao Jogo Maior, Menor ou Igual! \n");
    printf ("Você deve escolher um número e o tipo de comparação.\n");
    printf ("M. Maior \n");
    printf ("N. Menor \n");
    printf ("I. Igual \n");
    
    printf ("Escolha a Comparação: \n");
    scanf ("%c", &tipocomparacao);

    printf ("Digite seu Numero (Entre 1 e 100): \n");
    scanf ("%d", &numeroJogador);

    // Exibir número do computador

    printf (" O Número do Computador é: %d\n", numeroComputador);

    switch (tipocomparacao)
    {
    case 'M':
    case 'm':
     printf (" Você escolheu a opção Maior! \n");
        resultado = numeroJogador > numeroComputador? 1 : 0;


        /* code */
        break;
    case 'N':
    case 'n':
    printf (" Você escolheu a opção Menor! \n");
        resultado = numeroJogador < numeroComputador? 1 : 0;
        /* code */
        break;

    case 'I':
    case 'i':
     printf (" Você escolheu a opção Igual! \n");
        resultado = numeroJogador == numeroComputador? 1 : 0;
        /* code */
        break;


    default:
    printf ("Opção Inválida!");
        break;
    }
    
        printf (" O Número do Computador é: %d e o do Jogador é %d\n", numeroComputador, numeroJogador);
   
     if (resultado == 1) 
    {
        printf ("Você venceu! \n");
    }   else {
        printf ( "Você perdeu! \n");

    }
   
    return 0;
}
