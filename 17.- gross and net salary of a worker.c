#include <stdio.h>

int main(int argc, char const *argv[]) {

  float hourly_rate, gross_salary;
  int hours;
  char name;

  printf("Give me your name \n");
  scanf("%s", &name);

  printf("Give me your hours worked \n");
  scanf("%d", &hours);

  printf("Give me your hourly rate \n");
  scanf("%f", &hourly_rate);

  return 0;
}
