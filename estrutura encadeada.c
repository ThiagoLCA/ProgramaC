#include <stdio.h>

int main() {
  int nota;

  printf ("Digite a sua Nota: \n");
    scanf ("%d", &nota);

    if (nota >=90){
    printf ("Conceito A \n");
    } else if (nota >=80) {
    printf ("Seu conceito é B \n");
    } else if (nota >=70) {
    printf ("Seu Conceito é C \n");
    } else if (nota >=60) {
      printf ("Seu conceito é D \n");
    } else {
    printf ("Seu conceito é E");
    }

    return 0;
}