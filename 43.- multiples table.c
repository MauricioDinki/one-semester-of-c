#include <stdio.h>

int main(int argc, char const *argv[]) {

  int x;

  printf("\t");

	for(x=1; x<=10; x++) {
		printf("%d\t",x);
	}

	printf("\n");
	printf("\n");

	for(x=1; x<=10; x++) {
		printf("%d \t", x);
		printf("%d \t", x);
		printf("%d \t", x * 2);
		printf("%d \t", x * 3);
		printf("%d \t", x * 4);
		printf("%d \t", x * 5);
		printf("%d \t", x * 6);
		printf("%d \t", x * 7);
		printf("%d \t", x * 8);
		printf("%d \t", x * 9);
		printf("%d \n \n", x * 10);
	}

  return 0;
}
