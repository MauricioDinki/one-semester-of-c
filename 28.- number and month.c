# include <stdio.h>

int main(int argc, char const *argv[]) {

  int number;

  printf("Give me a number \n");
  scanf("%d", &number);

  switch (number) {
    case 1:
      printf("It is january \n");
      break;
    case 2:
      printf("It is february \n");
      break;
    case 3:
      printf("It is march \n");
      break;
    case 4:
      printf("It is april \n");
      break;
    case 5:
      printf("It is may \n");
      break;
    case 6:
      printf("It is june \n");
      break;
    case 7:
      printf("It is july \n");
      break;
    case 8:
      printf("It is august \n");
      break;
    case 9:
      printf("It is september \n");
      break;
    case 10:
      printf("It is october \n");
      break;
    case 11:
      printf("It is november \n");
      break;
    case 12:
      printf("It is december \n");
      break;
    default:
      printf("This number does not have a month \n");
      break;
  }

  return 0;
}
