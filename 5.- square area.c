#include <stdio.h>

int main(int argc, char const *argv[]) {

  float side, area;

  printf("Give me the side of the square \n");
  scanf("%f", &side);

  area = side*side;
  printf("The area is %f \n", area );
}
