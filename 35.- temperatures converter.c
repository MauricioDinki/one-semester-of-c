# include <stdio.h>

int main(int argc, char const *argv[]) {

  float input;
  int option;

  printf("*** Temperature converter *** \n\n");
  printf("1) Fahrenheit to celsius \n");
  printf("2) Celsius to fahrenheit \n");
  printf("3) Kelvin to celsius \n");
  printf("4) Celsius to Kelvin \n");
  printf("5) Kelvin to fahrenheit \n");
  printf("6) Fahrenheit to Kelvin \n");

  scanf("%d", &option);

  switch (option) {
    case 1:
      printf("Give me the fahrenheit grades \n");
      scanf("%f", &input );
      printf("The celsius grades are %f \n", (5*(input-32))/9);
      break;
    case 2:
      printf("Give me the celsius grades \n");
      scanf("%f", &input );
      printf("The fahrenheit grades are %f \n", (9*input/5)+32);
      break;
    case 3:
      printf("Give me the kelvin grades \n");
      scanf("%f", &input );
      printf("The celsius grades are %f \n", input-273.15);
      break;
    case 4:
      printf("Give me the celsius grades \n");
      scanf("%f", &input );
      printf("The kelvin grades are %f \n", input+273.15);
      break;
    case 5:
      printf("Give me the kelvin grades \n");
      scanf("%f", &input );
      printf("The fahrenheit grades are %f \n", ((9*(input-273.15))/5)+32 );
      break;
    case 6:
      printf("Give me the fahrenheit grades \n");
      scanf("%f", &input );
      printf("The kelvin grades are %f \n", ((5*(input-32))/9)+273.15);
      break;
    default:
      printf("This caracter does not have an operation \n");
      break;
  }

  return 0;
}
