#include <stdio.h>

int main(int argc, char const *argv[]) {

  float height, base, area;

  printf("Give me the height of the rectangle \n");
  scanf("%f", &height);

  printf("Give me the base of the rectangle \n");
  scanf("%f", &base);

  area = base*height;
  printf("The area is %f \n", area );
}
