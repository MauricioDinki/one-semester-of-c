#include <stdio.h>

int main(int argc, char const *argv[]) {

  int initial, final;

  printf("Give me the initial \n");
  scanf("%d", &initial);

  printf("Give me the final \n");
  scanf("%d", &final);

  if (initial < final) {
    for (initial;  initial <= final; initial++) {
      printf("%d \n", initial);
    }
  } else if (initial > final) {
    for (initial;  initial >= final; initial--) {
      printf("%d \n", initial);
    }
  }

  return 0;
}
