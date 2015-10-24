# include <stdio.h>

int main(int argc, char const *argv[]) {

  int number, count, total;

  printf("Give me a number \n");
  scanf("%d", &number);

  total = number;

  for (count = number ; count > 1; count--){
    total = total * (number-1);
  }

  printf("The number is %d \n", total);

  return 0;
}
