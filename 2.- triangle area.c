#include <stdio.h>

int main(int argc, char const *argv[]) {

  float height, base, area;

  printf("Give me the height of the triangle \n");
  scanf("%f", &height);

  printf("Give me the base of the triangle \n");
  scanf("%f", &base);

  area = base*height/2;
  printf("The area is %f \n", area );

  return 0;
}
