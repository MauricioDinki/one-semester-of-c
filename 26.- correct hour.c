#include <stdio.h>

int main(int argc, char const *argv[]) {

  int hours, minutes, seconds;

  printf("Give me the hours, minutes and seconds respectively \n");
  scanf("%d", &hours);
  scanf("%d", &minutes);
  scanf("%d", &seconds);

  if (hours <= 0 || minutes <= 0 || seconds <=0) {
    printf("The hours can not be negative \n");
  }
  else {
    if (hours >= 24) {
      printf("The hours are incorrect \n");
    }
    else {
      if (minutes >= 60) {
        printf("The minutes are incorrect \n");
      }
      else {
        if (seconds >= 70) {
          printf("The seconds are incorrect \n");
        }
        else {
          printf("The hour %d:%d:%d is correct \n", hours, minutes, seconds);
        }
      }
    }
  }
}
