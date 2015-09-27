#include <stdio.h>

int main(int argc, char const *argv[]) {
  float score, score_total, average;
  int score_numbers;

  do {
    printf("Give me a valid score \n");
    scanf("%f", &score);
    score_total = score_total + score;
    score_numbers++;
  } while(score <= 10 && score >= 0);

  score_total = score_total - score;
  score_numbers--;

  if (score_numbers == 0) {
    printf("You do not have an average \n");
  }
  else {
    average = score_total/score_numbers;
    printf("The average is %f", average );
  }
  return 0;
}
