# include <stdio.h>
int main(int argc, char const *argv[]) {

  int year, month, day, correct;

  printf("Give me a year \n");
  scanf("%d", &year);

  printf("Give me a month \n");
  scanf("%d", &month);

  printf("Give me a day \n");
  scanf("%d", &day);

  if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
    printf("The date is incorrect \n");
  } else {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
      printf("The year is leap \n");
    }
    else {
      printf("The year is not leap \n");
    }
  }

  return 0;
}
