#include <stdio.h>
 
int main() {
    char nome [50];
    int nota1, nota2, nota3;
    float media;

    printf("*** Programa de Cálculo de Média *** \n");
    
    printf("Digite seu nome:  \n");
    scanf("%49s", nome);

    printf("Digite a sua primeira nota:  \n");
    scanf ("%d", &nota1);

    printf("Digite a sua segunda nota:  \n");
    scanf ("%d", &nota2);

    printf("Digite a sua terceira nota:  \n");
    scanf ("%d", &nota3);

    media = (float)(nota1+ nota2 + nota3) /3;

    printf("\nAluno: %s\n", nome);
    printf("A Média é: %.1f \n", media);



return 0;
 
}