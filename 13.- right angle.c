#include <stdio.h>

int main(int argc, char const *argv[]) {
  float angle;

  printf("Give me the angle \n");
  scanf("%f", &angle);

  if (angle < 0 || angle > 360) {
    printf("The angle can not be less than 0 and more than 360\n");
  }
  else {
    if (angle < 90) {
      printf("The angle is right \n");
    }
    else {
      printf("The angle is not right \n");
    }
  }
  return 0;
}
