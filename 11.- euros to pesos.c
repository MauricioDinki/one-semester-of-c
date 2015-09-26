#include <stdio.h>

int main(int argc, char const *argv[]) {

  float pesos, euros, coin;

  printf("Insert the euros to change \n");
  scanf("%f", &euros);

  printf("Insert the value of the change \n");
  scanf("%f", &coin);

  if (coin == 0) {
    printf("The coin cant be 0 \n");
  }
  else {
    pesos = euros*coin;
    printf("The pesos are %f \n", pesos );
  }

  return 0;
}
