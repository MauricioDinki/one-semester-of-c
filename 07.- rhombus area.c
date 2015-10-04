# include <stdio.h>

int main(int argc, char const *argv[]) {

  float d_higher, d_minus, area;

  printf("Give me the higher diameter of the rhombus \n");
  scanf("%f", &d_higher);

  printf("Give me the minus diameter of the rhombus \n");
  scanf("%f", &d_minus);

  area = (d_higher*d_minus)/2;
  printf("The area is %f \n", area );
}
