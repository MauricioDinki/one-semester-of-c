# include <stdio.h>

int main(int argc, char const *argv[]) {

  float hourly_rate, gross_salary, minimun_salary, net_salary;
  int hours;

  printf("Give me your hours worked \n");
  scanf("%d", &hours);

  printf("Give me your hourly rate \n");
  scanf("%f", &hourly_rate);

  printf("Minumun salary per day \n");
  scanf("%f", &minimun_salary );

  minimun_salary = minimun_salary * 7;

  if (hours <= 40) {
    gross_salary = hours * hourly_rate;
  }
  else {
    if (hours <= 50) {
      gross_salary = ((hours - 40)*2+40)*hourly_rate;
    }
    else {
      if (hours <= 80) {
        gross_salary = ((hours - 50)*3+60)*hourly_rate;
      }
      else {
        gross_salary = 150 * hourly_rate;
      }
    }
  }

  if (gross_salary <= 2*minimun_salary) {
    net_salary = gross_salary;
  }
  else {
    if (gross_salary <= 5*gross_salary) {
      net_salary = gross_salary - (gross_salary*0.5);
    }
    else {
      if (gross_salary <= 10*gross_salary) {
        net_salary = gross_salary - (gross_salary*0.75);
      }
      else {
        net_salary = gross_salary*7;
      }
    }
  }

  printf("The gross salary is %f \n", gross_salary);
  printf("The net salary is %f \n", net_salary);

  return 0;
}
