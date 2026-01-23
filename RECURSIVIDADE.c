#include <stdio.h>

// Função recursiva para imprimir números de n até 1

void recursivo (int n) 
{
    if (n >0) 
    {
        printf ("%d \n", n);
        // Imprime o valor atual de n

    recursivo (n-1);
    // Chama a si mesma com n - 1
    }

}

int main () {

int numero = 10;

printf (" Contagem Regressiva \n\n ");

recursivo (numero);
return 0;

}