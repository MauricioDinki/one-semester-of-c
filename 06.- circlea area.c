#include <stdio.h>

int main(int argc, char const *argv[]) {

  float radio, area;

  printf("Give me the radio of the circle \n");
  scanf("%f", &radio);

  area = 3.14*(radio*radio);
  printf("The area is %f \n", area );
}
