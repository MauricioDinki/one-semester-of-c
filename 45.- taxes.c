#include <stdio.h>

int main(int argc, char const *argv[]) {

  float money, tax;
  int years, n;

  printf("Give me the money \n");
  scanf("%f", &money);

  printf("Give me the years \n");
  scanf("%d", &years);

  printf ("Years \t money \t Tax \n");
  for (n = 1; n <= years; n ++){
  	tax = money * .1;
  	money = money + tax;
    printf ("\n %d \t %.2f \t %.2f \n ", n, money, tax);
  }

  return 0;
}
