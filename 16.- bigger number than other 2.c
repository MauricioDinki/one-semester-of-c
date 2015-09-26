#include <stdio.h>

int main(int argc, char const *argv[]) {

  float number1, number2, number3;

  printf("Give me the numbers \n");
  scanf("%f", &number1);
  scanf("%f", &number2);
  scanf("%f", &number3);

  if (number1 > number2) {
    if (number1 > number3) {
      printf("%f is the bigger number \n", number1 );
    }
    else {
      printf("%f is the bigger number \n", number3 );
    }
  }
  else {
    if (number2 > number3) {
      printf("%f is the bigger number \n", number2 );
    }
    else {
      printf("%f is the bigger number \n", number3 );
    }
  }

  return 0;
}
