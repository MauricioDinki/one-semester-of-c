# include <stdio.h>

int main(int argc, char const *argv[]) {

  void addition(float number1, float number2);
  void subtraction(float number1, float number2);
  void multiplication(float number1, float number2);
  void division(float number1, float number2);

  float number1, number2;
  char caracter;

  printf("Give me 2 numbers to make an operation \n");
  scanf("%f", &number1);
  scanf("%f", &number2);

  printf("Give me a character to make the operation (+ - / *) \n");
  scanf("%s", &caracter);

  switch (caracter) {
    case '+':
      addition(number1, number2);
      break;
    case '-':
      subtraction(number1, number2);
      break;
    case '/':
      division(number1, number2);
      break;
    case '*':
      multiplication(number1, number2);
      break;
    default:
      printf("This caracter  does not have an operation \n");
      break;
  }

  return 0;
}

void addition(float number1, float number2) {
  printf("The result is %f \n", number1 + number2 );
  return;
}

void subtraction(float number1, float number2) {
  printf("The result is %f \n", number1 - number2 );
  return;
}

void division(float number1, float number2) {
  if (number2 == 0) {
    printf("Invalid operation \n");
  } else {
    printf("The result is %f \n", number1 / number2 );
  }
  return;
}

void multiplication(float number1, float number2) {
  printf("The result is %f \n", number1 * number2 );
  return;
}
