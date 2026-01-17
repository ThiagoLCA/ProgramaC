#include <stdio.h>

/*A expressão idade >= 18 && idade <= 30 && altura > 1.70 contém três condições:
idade >= 18: verifica se a idade é maior ou igual a 18.
idade <= 30: verifica se a idade é menor ou igual a 30.
altura > 1.70: verifica se a altura é maior que 1.70. 
*/
int main() {
  int idade = 20;
  float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}
