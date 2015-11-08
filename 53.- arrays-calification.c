# include <stdio.h>

int main(int argc, char const *argv[]) {

  void reg(float scores[40]);
  float best(float scores[40]);
  float worst(float scores[40]);
  void report(float scores[40]);
  float average(float scores[40]);

  float scores[40];

  int position;

  printf("scores average\n");
  reg(scores);
  printf("The best score is %f \n", best(scores));
  printf("The worst score is %f \n", worst(scores));
  printf("Score report \n");
  report(scores);
  printf("The average is %f \n", average(scores));
  printf("Give me a number of score \n");
  scanf("%i", &position);
  if (position >= 0 && position <= 40) {
    printf("The score that you look is %f \n", scores[position]);
  }
  return 0;
}

void reg(float scores[]) {
  int i = 0;
  float score;
  for (i; i < 40; i++){
    printf("Give me the score \n");
    scanf("%f", &score );
    scores[i] = score;
  }
  return;
}

float best(float scores[]) {
  float best = 0;
  int i = 0;
  for (i; i < 40; i++){
    if (scores[i] > best) {
      best = scores[i];
    }
  }
  return best;
}

float worst(float scores[]) {
  float worst = 1000;
  int i = 0;
  for (i; i < 40; i++){
    if (scores[i] < worst) {
      worst = scores[i];
    }
  }
  return worst;
}

void report(float scores[]) {
  int i = 0;
  for (i; i < 40; i++) {
    printf("The score #%i is %f \n",i, scores[i] );
  }
  return;
}

float average(float scores[]){
  int total;
  float average;
  int i = 0;
  for (i; i < 40; i++) {
    average += scores[i];
  }
  total = average/40;
  return total;
}
