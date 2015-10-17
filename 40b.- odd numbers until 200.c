# include <stdio.h>

int main(int argc, char const *argv[]) {

  int count;
  int initial = 2;

  do {
    initial=initial+2;
    count ++;
  } while(initial <= 200);

  printf("The odds are %d \n", count);
  return 0;
}
