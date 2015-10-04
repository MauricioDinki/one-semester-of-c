# include <stdio.h>

int main(int argc, char const *argv[]) {

  float grades_c, grades_f;

  printf("Give me the celsius grades \n");
  scanf("%f", &grades_c);

  grades_f = (9/5)*grades_c+32;
  printf("The grades are %f \n", grades_f );

  return 0;
}
