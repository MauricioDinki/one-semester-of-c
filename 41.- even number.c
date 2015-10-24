# include <stdio.h>

int main(int argc, char const *argv[]) {

  int x, y;

  printf("Give me a number > 2 \n");
  scanf("%d", &x);

  if (x % 2 != 0) {
    printf("The number is not even \n");
  } else {
    printf("The number is even\n");
  }

  return 0;
}
