#include <stdio.h>

int main(int argc, char const *argv[]) {
  float side1, side2, side3;

  printf("Give me the sides of the triangle \n");
  scanf("%f", &side1);
  scanf("%f", &side2);
  scanf("%f", &side3);

  if (side1 == side2 && side2 == side3) {
    printf("The triangle is Equilateral\n");
  }
  else {
    if (side1 == side2 || side2 == side3 || side3 == side1) {
      printf("The triangle is Isosceles\n");
    }
    else {
      printf("The triangle is Scalene\n");
    }
  }

  return 0;
}
