#include <stdio.h>

int main(int argc, char const *argv[]) {
  float score;

  do {
    printf("Give me a valid score \n");
    scanf("%f", &score);
  } while(score <= 10 && score >= 0);

  printf("You insert a invalid score\n");
  return 0;
}
