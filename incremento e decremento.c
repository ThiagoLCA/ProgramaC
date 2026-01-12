#include <stdio.h>
int main (){

/*
Incremento ++
Pré Incremento ++a
Pós Incremento a++
Decremento --
Pré decremento --a
Pós Decremento a--
*/

int numero1 = 1, resultado;

printf("Antes incremento:  %d \n", numero1);
numero1 ++;
resultado = numero1++;
printf("Apos Pós-incremento - numero1:  %d - resultado: %d \n", numero1, resultado);

numero1 --;
printf("Apos decremento:  %d \n", numero1);


}