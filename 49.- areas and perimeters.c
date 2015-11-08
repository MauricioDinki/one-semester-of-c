# include <stdio.h>

int main(int argc, char const *argv[]) {

  void circle();
  void square();
  void rectangle();
  void rhombus();
  void triangle();
  int option;

  printf("--- Select an option --- \n");
  printf("1.- Circle \n");
  printf("2.- Square \n");
  printf("3.- Rectangle \n");
  printf("4.- Rhombus \n");
  printf("5.- Triangle \n");

  scanf("%d", &option);

  switch (option) {
    case 1:
      circle();
      break;
    case 2:
      square();
      break;
    case 3:
      rectangle();
      break;
    case 4:
      rhombus();
      break;
    case 5:
      triangle();
      break;
    default:
      printf("Invalid option \n");
      break;
  }

  return 0;
}

void circle() {
  float radius, perimeter, area;

  printf("Give me the radius of the circle \n");
  scanf("%f", &radius);

  perimeter = 2*3.14*radius;
  printf("The perimeter is %f \n", perimeter );

  area = 3.14*(radius*radius);
  printf("The area is %f \n", area );

  return;
}

void square() {
  float side, perimeter, area;

  printf("Give me the side of the square \n");
  scanf("%f", &side);

  perimeter = side*4;
  printf("The perimeter is %f \n", perimeter );

  area = side*side;
  printf("The area is %f \n", area );
}

void rectangle() {
  float height, base, area, perimeter;

  printf("Give me the height of the rectangle \n");
  scanf("%f", &height);

  printf("Give me the base of the rectangle \n");
  scanf("%f", &base);

  area = base*height;
  printf("The area is %f \n", area );

  perimeter = (height*2)+(base*2);
  printf("The perimeter is %f \n", perimeter );
}

void rhombus() {
  float d_higher, d_minus, side, area, perimeter;

  printf("Give me the higher diameter of the rhombus \n");
  scanf("%f", &d_higher);

  printf("Give me the minus diameter of the rhombus \n");
  scanf("%f", &d_minus);

  area = (d_higher*d_minus)/2;
  printf("The area is %f \n", area );

  printf("Give me the side of the rhombus \n");
  scanf("%f", &side);

  perimeter = side*4;
  printf("The perimeter is %f \n", perimeter );
}

void triangle() {
  float height, base, area, side1, side2, side3, perimeter;

  printf("Give me the height of the triangle \n");
  scanf("%f", &height);

  printf("Give me the base of the triangle \n");
  scanf("%f", &base);

  area = base*height/2;
  printf("The area is %f \n", area );

  printf("Give me the side 1 of the triangle \n");
  scanf("%f", &side1);

  printf("Give me the side 2 of the triangle \n");
  scanf("%f", &side2);

  printf("Give me the side 3 of the triangle \n");
  scanf("%f", &side3);

  perimeter = side1+side2+side3;
  printf("The perimeter is %f \n", perimeter );
}
