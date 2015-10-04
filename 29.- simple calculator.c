# include <stdio.h>

int main(int argc, char const *argv[]) {

  float number1, number2;
  char caracter;

  printf("Give me 2 numbers to make an operation \n");
  scanf("%f", &number1);
  scanf("%f", &number2);

  printf("Give me a character to make the operation (+ - / *) \n");
  scanf("%s", &caracter);

  switch (caracter) {
    case '+':
      printf("The result is %f \n", number1 + number2 );
      break;
    case '-':
      printf("The result is %f \n", number1 - number2 );
      break;
    case '/':
      if (number2 == 0) {
        printf("The second number can not be 0 \n");
      }
      else {
        printf("The result is %f \n", number1 / number2 );
      }
      break;
    case '*':
      printf("The result is %f \n", number1 * number2 );
      break;
    default:
      printf("This caracter  does not have an operation \n");
      break;
  }

  return 0;
}
