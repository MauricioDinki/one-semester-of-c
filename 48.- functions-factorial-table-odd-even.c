# include <stdio.h>
# include <math.h>

int main(int argc, char const *argv[]) {

  int factorial(int number);
  void even(int number);
  void odd(int number);
  void table(int number);

  int number;

  printf("Give me a number \n");
  scanf("%d", &number);

  printf("\n------Multiplicate Table------\n");
  table(number);

  printf("\n------Factorial------\n");
  printf("The factorial of %d is %d\n", number, factorial(number) );

  printf("\n------Odd number ------\n");
  odd(number);
  printf("\n------Even number ------\n");
  even(number);
  return 0;
}

void table(int number) {
  int count;
  for (count = 1; count <= 10; count ++){
    printf("%d * %d = %d \n", number, count, number * count);
  }
  return;
}

int factorial(int number) {
  int total, count;
  total = number;
  for (count = number ; count > 1; count--){
    total = total * (number-1);
  }
  return total;
}

void even(int number) {
  if (number % 2 != 0) {
    printf("The number is not even \n");
  } else {
    printf("The number is even\n");
  }
  return;
}

void odd(int number) {
  float rut;
  int odd, y;

  rut = sqrt(number);
  odd = 0;
  for (y = 2; y < rut + 1; y++) {
    if (number % y == 0) {
      odd = 1;
      break;
    }
  }
  if (odd == 0) {
    printf("The number is odd \n");
  } else {
    printf("The number is not odd\n");
  }
}
