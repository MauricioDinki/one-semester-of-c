#include <stdio.h>

int main(int argc, char const *argv[]) {

  int score;
  int count = 1;
  float score_total;

  while (count <= 20) {
    printf("Give me a score \n");
    scanf("%d", &score );
    score_total = score_total + score;
    count ++;
  }

  printf("The average is %f \n", score_total/20);
  return 0;
}
