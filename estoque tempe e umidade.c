#include <stdio.h>

int main() {
  float temperatura, umidade;
  unsigned int estoque;
  unsigned int estoqueMinimo = 1000;


  printf ("Entre com a Temperatura: \n");
  scanf ("%f", &temperatura);
   
  printf ("entre com a Umidade: \n");
  scanf ("%f", &umidade);

  printf ("Entre com o Estoque: \n\n");
  scanf ("%u", &estoque);

    if (temperatura > 30) {
      printf ("Temperatura está Alta \n");

    } else {
      printf("Temperatura dentro da normalidade \n");
      
    }
    if (umidade > 50){
    printf ("Umidade elevada \n");
    
    } else {

      printf ("Umidade normal \n");
    } 

    if (estoque < estoqueMinimo)
  {
    printf ("Estoque abaixo do Mínimo! \n");
    
  }
    else {
      printf ("Estoque normal \n");

    }


  return 0;
}