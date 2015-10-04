# include <stdio.h>

int main(int argc, char const *argv[]) {

  float hourly_rate, gross_salary;
  int hours;
  char name;

  printf("Give me your hours worked \n");
  scanf("%d", &hours);

  printf("Give me your hourly rate \n");
  scanf("%f", &hourly_rate);

  gross_salary = hourly_rate * hours;

  printf("The gross salary is %f \n", gross_salary);

  return 0;
}
