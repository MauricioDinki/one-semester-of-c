# include <stdio.h>

int main(int argc, char const *argv[]) {

  int age;

  printf("Give me your age \n");
  scanf("%d", &age);

  if (age >= 18) {
    printf("Can vote \n");
  }
  else{
    printf("Can not vote \n");
  }
  return 0;
}
