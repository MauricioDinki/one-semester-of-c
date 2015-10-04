# include <stdio.h>

int main(int argc, char const *argv[]) {

  float radius, area;

  printf("Give me the radius of the circle \n");
  scanf("%f", &radius);

  area = 3.14*(radius*radius);
  printf("The area is %f \n", area );
}
