# include <stdio.h>

int main(int argc, char const *argv[]) {
  float angle;

  printf("Give me the angle \n");
  scanf("%f", &angle);

  if (angle < 0) {
    printf("The angle is negative \n");
  }
  else {
    if (angle < 90) {
      printf("The angle is acute \n");
    }
    else {
      if (angle == 90) {
        printf("The angle is right \n");
      }
      else {
        if (angle > 90) {
          printf("The angle is obtuse \n"); 
        }
      }
    }
  }
  return 0;
}
