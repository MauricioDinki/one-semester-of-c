#include <stdio.h>

int main(int argc, char const *argv[]) {

  int score, count;
  float score_total;

  for (count = 1 ; count <=20; count++) {
    printf("Give me a score \n");
    scanf("%d", &score );
    score_total = score_total + score;
  }

  printf("The average is %f \n", score_total/20);
  return 0;
}
