#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

  char caracter;

  printf("Give me a caracter \n");
  scanf("%c", &caracter);
  caracter = toupper(caracter);

  switch (caracter) {
    case 'M':
      printf("It is monday \n");
      break;
    case 'T':
      printf("It is tuesday \n");
      break;
    case 'W':
      printf("It is wednesday \n");
      break;
    case 'H':
      printf("It is thursday \n");
      break;
    case 'F':
      printf("It is friday \n");
      break;
    case 'A':
      printf("It is saturday \n");
      break;
    case 'U':
      printf("It is sunday \n");
      break;
    default:
      printf("This caracter does not have a day \n");
      break;
  }

  return 0;
}
