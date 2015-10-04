# include <stdio.h>

int main(int argc, char const *argv[]) {

  int input1, input2, input3, inputext;
  int count = 0;
  float promstudent, outputpromg, total;
  char inputextoption, inputstudentoption;

  do {
    printf("Give me the scores \n");
    scanf("%d", &input1 );
    scanf("%d", &input2 );
    scanf("%d", &input3 );

    promstudent = (input1 + input2 + input3)/3;
    count++;

    printf("The student made extra \n");
    scanf("%s", &inputextoption );

    if (inputextoption == 'y') {
      printf("Give me the score of the extra \n");
      scanf("%d", &inputext );
      promstudent = inputext;
    }

    if (promstudent > 6 && promstudent < 10) {
      promstudent = promstudent + 0.5;
    }

    total = total + promstudent;
    
    printf("More Scores \n");
    scanf("%s", &inputstudentoption );

  } while(inputstudentoption == 'y');

  outputpromg = total/count;

  printf("The General Score is %f \n", outputpromg);

  return 0;
}
