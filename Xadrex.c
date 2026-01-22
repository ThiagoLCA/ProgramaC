// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    #include <stdio.h>

int main() {

    int mov_Torre = 5;
    int mov_Bispo = 5;
    int mov_Rainha = 8;

    int i;

    // Movimento da Torre - 5 CASAS PARA DIREITA //

    
    printf ("Movimentação da Torre \n\n");
    for ( i = 1; i <=  mov_Torre; i++)
    {
        printf ("Casa %d: direita \n\n", i);
    }
    
    // MOVIMENTO BISPO - MOVER 5 CASAS NA DIAGONAL - CIMA E DIREITA \\

    printf ("Movimento do Bispo \n\n");
    
    i=1;
    while (i <= mov_Bispo)
    {
        printf ("Casa %d: Cima, Direita \n\n", i);
        i++;
    }
    

    // MOVIMENTO RAINHA - 8 CASAS PARA A ESQUERDA  //

    printf ("Movimentação da Rainha \n\n");
    i=1;

    do
    {
        printf ("Casa %d: Esquerda \n\n", i);
        i++;
    } while (i<= mov_Rainha);

    
    return 0;
}


    