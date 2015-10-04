# include <stdio.h>

int main(int argc, char const *argv[]) {

  float input;
  int option;

  printf("*** Change house *** \n");
  printf("This program works with the lastes coins in the market \n\n");
  printf("1) Pesos to dollars \n");
  printf("2) Dollars to pesos \n");
  printf("3) Pesos to euros \n");
  printf("4) Euros to pesos \n");

  scanf("%d", &option);

  switch (option) {
    case 1:
      printf("Give me the pesos \n");
      scanf("%f", &input );
      printf("The dollars are %f \n", input/17);
      break;
    case 2:
      printf("Give me the dollars \n");
      scanf("%f", &input );
      printf("The pesos are %f \n", input*17);
      break;
    case 3:
      printf("Give me the pesos \n");
      scanf("%f", &input );
      printf("The euros are %f \n", input/19);
      break;
    case 4:
      printf("Give me the euros \n");
      scanf("%f", &input );
      printf("The pesos are %f \n", input*19);
      break;
    default:
      printf("This caracter does not have an operation \n");
      break;
  }

  return 0;
}
