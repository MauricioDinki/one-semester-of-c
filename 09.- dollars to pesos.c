# include <stdio.h>

int main(int argc, char const *argv[]) {

  float pesos, dollars, coin;

  printf("Insert the dollars to change \n");
  scanf("%f", &dollars);

  printf("Insert the value of the change \n");
  scanf("%f", &coin);

  if (coin == 0) {
    printf("The coin cant be 0 \n");
  }
  else {
    pesos = dollars*coin;
    printf("The pesos are %f \n", pesos );
  }

  return 0;
}
