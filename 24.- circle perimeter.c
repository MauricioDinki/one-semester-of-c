#include <stdio.h>

int main(int argc, char const *argv[]) {

  float radius, perimeter;

  printf("Give me the radius of the circle \n");
  scanf("%f", &radius);

  perimeter = 2*3.14*radius;
  printf("The perimeter is %f \n", perimeter );

  return 0;
}
