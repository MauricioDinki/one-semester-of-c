# include <stdio.h>

int main(int argc, char const *argv[]) {

  int count;
  int initial = 5;

  do {
    initial=initial+5
    count ++;
  } while(initial <= 5000);

  printf("The multiples are %d \n", count);
  return 0;
}
