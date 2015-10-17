# include <stdio.h>

int main(int argc, char const *argv[]) {

  int count;
  int initial = 1;

  while (initial <= 200) {
    initial=initial+2;
    count ++;
  }

  printf("The odds are %d \n", count);

  return 0;
}
