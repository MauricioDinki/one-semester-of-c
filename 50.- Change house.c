# include <stdio.h>
int main(int argc, char const *argv[]) {

  void pesos_dll();
  void dll_pesos();
  void eur_pesos();
  void pesos_eur();
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
      pesos_dll();
      break;
    case 2:
      dll_pesos();
      break;
    case 3:
      eur_pesos();
      break;
    case 4:
      pesos_eur();
      break;
    default:
      printf("Invalid option \n");
      break;
  }

  return 0;
}

void pesos_dll() {
  float input;
  printf("Give me the pesos \n");
  scanf("%f", &input );
  printf("The dollars are %f \n", input/17);
 return;
}

void dll_pesos() {
  float input;
  printf("Give me the dollars \n");
  scanf("%f", &input );
  printf("The pesos are %f \n", input*17);
}

void eur_pesos() {
  float input;
  printf("Give me the euros \n");
  scanf("%f", &input );
  printf("The pesos are %f \n", input*19);
}

void pesos_eur() {
  float input;
  printf("Give me the pesos \n");
  scanf("%f", &input );
  printf("The euros are %f \n", input/19);
}
