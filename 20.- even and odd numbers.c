# include <stdio.h>

int main(int argc, char const *argv[]) {
  int number;

  printf("Give me a whole number \n");
  scanf("%d", &number );

  if (number%2 == 0) {
    printf("The number is odd \n");
  }
  else {
    printf("The number is even \n");
  }
  
  return 0;
}
