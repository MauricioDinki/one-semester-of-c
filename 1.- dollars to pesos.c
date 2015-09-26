#include <stdio.h>

int main(int argc, char const *argv[]) {

  float pesos, dollars, coin;

  printf("Insert the pesos to change \n");
  scanf("%f", &pesos);

  printf("Insert the value of the change \n");
  scanf("%f", &coin);

  if (coin == 0) {
    printf("The coin cant be 0 \n");
  }
  else {
    dollars = pesos/coin;
    printf("The dollars are %f \n", dollars );
  }

  return 0;
}
