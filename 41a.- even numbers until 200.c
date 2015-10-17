# include <stdio.h>

int main(int argc, char const *argv[]) {

  int count;
  int initial = 1;

  for (initial; initial <= 200; initial=initial+2) {
    count ++;
    printf("%d\n", initial);
  }

  printf("The odds are %d \n", count);
  return 0;
}
