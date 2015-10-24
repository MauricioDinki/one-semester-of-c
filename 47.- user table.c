# include <stdio.h>

int main(int argc, char const *argv[]) {

  int number, count;

  printf("Give me a number [1-10] \n");
  scanf("%d", &number);

  for (count = 1; count <= 10; count ++){
    printf("%d * %d = %d \n", number, count, number * count);
  }

  return 0;
}
