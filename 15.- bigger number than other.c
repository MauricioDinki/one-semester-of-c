# include <stdio.h>

int main(int argc, char const *argv[]) {

  float number1, number2;

  printf("Give me the numbers \n");
  scanf("%f", &number1);
  scanf("%f", &number2);

  if (number1 > number2) {
    printf("%f is the bigger number \n", number1 );
  }
  else{
    if (number2 > number1) {
      printf("%f is the bigger number \n", number2 );
    }
    else {
      printf("The numbers are the same \n");
    }
  }

  return 0;
}
