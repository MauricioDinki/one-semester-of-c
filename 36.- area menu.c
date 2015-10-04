# include <stdio.h>

int main(int argc, char const *argv[]) {

  float input1, input2, area;
  int option;

  printf("*** Temperature converter *** \n\n");
  printf("1) Triangle area \n");
  printf("2) Rectangle area \n");
  printf("3) Square area \n");
  printf("4) Circle area \n");
  printf("5) Rhombus area \n");

  scanf("%d", &option);

  switch (option) {
    case 1:
      printf("Give me the base of the triangle \n");
      scanf("%f", &input1);
      printf("Give me the height of the triangle \n");
      scanf("%f", &input2);
      area = input1*input2/2;
      printf("The area is %f \n", area );
      break;
    case 2:
      printf("Give me the height of the rectangle \n");
      scanf("%f", &input1);
      printf("Give me the base of the rectangle \n");
      scanf("%f", &input2);
      area = input2*input1;
      printf("The area is %f \n", area );
      break;
    case 3:
      printf("Give me the side of the square \n");
      scanf("%f", &input1);
      area = input1*input1;
      printf("The area is %f \n", area );
      break;
    case 4:
      printf("Give me the radio of the circle \n");
      scanf("%f", &input1);
      area = 3.14*(input1*input1);
      printf("The area is %f \n", area );
      break;
    case 5:
      printf("Give me the higher diameter of the rhombus \n");
      scanf("%f", &input1);
      printf("Give me the minus diameter of the rhombus \n");
      scanf("%f", &input2);
      area = (input1*input2)/2;
      printf("The area is %f \n", area );
      break;
    default:
      printf("This caracter does not have an operation \n");
      break;
  }

  return 0;
}
