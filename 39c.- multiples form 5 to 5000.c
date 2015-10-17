# include <stdio.h>

int main(int argc, char const *argv[]) {

  int count;
  int initial = 5;

  while (initial <= 5000) {
    initial=initial+5;
    count ++;
  }

  printf("The multiples are %d \n", count);
  return 0;
}
