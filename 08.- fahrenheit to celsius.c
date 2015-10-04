# include <stdio.h>

int main(int argc, char const *argv[]) {

  float grades_c, grades_f;

  printf("Give me the fahrenheit grades \n");
  scanf("%f", &grades_f);

  grades_c = (5/9)*grades_f-32;
  printf("The grades are %f \n", grades_c );

  return 0;
}
