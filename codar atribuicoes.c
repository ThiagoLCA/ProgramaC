#include <stdio.h>

int main (){

/*
Atribuição simples =
Atribuição com somo +=
Atribuição com Subtração -=
Atribuição com Multiplicação *=
Atribuição com divisão /=
*/

int numero1=10, numero2, resultado;

resultado=10;
printf("Resultado:  %d\n", resultado);
//resultado vai ser igual a resultado +20
resultado +=20;
printf("Resultado:  %d\n", resultado);

//resultado = resultado-numero1
resultado-= numero1;
printf("Resultado:  %d\n", resultado);

//Resultado= Resultado*5
resultado *=5;
printf("Resultado:  %d\n", resultado);

//Resultado = Resultado/2
resultado /=2;
printf("Resultado:  %d\n", resultado);



return 0;



}