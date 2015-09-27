#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {

  char caracter;

  printf("Give me a caracter \n");
  scanf("%c", &caracter);
  caracter = toupper(caracter);

  switch (caracter) {
    case 'C':
      printf("Bachelor of Computer Science \n");
      break;
    case 'I':
      printf("Bachelor of Computer Engineering \n");
      break;
    case 'A':
      printf("Bachelor of Industrial Management \n");
      break;
    case 'T':
      printf("Bachelor of Engineering in Transportation \n");
      break;
    case 'N':
      printf("Bachelor of Industrial Engineering \n");
      break;
    default:
      printf("This caracter does not have a career \n");
      break;
  }

  return 0;
}
