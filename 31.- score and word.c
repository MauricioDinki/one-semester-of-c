#include <stdio.h>

int main(int argc, char const *argv[]) {
  float score;

  printf("Give me the score \n");
  scanf("%f", &score);

  if (score <= 10 && score >= 0) {
    printf("***Scores*** \n");
    printf("10 - Excelent \n");
    printf("9 - Very good \n");
    printf("8 - Good \n");
    printf("7 - Regular \n");
    printf("6 - Insufficient \n");
    printf("Less than five  - Failed \n");
  }
  else {
    printf("The score is not valid \n");
  }
  return 0;
}
