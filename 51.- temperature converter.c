# include <stdio.h>

 int main(int argc, char const *argv[]) {

   void far_cel();
   void cel_far();
   void kel_cel();
   void cel_kel();

   int option;

   printf("*** Temperature converter *** \n\n");
   printf("1) Fahrenheit to celsius \n");
   printf("2) Celsius to fahrenheit \n");
   printf("3) Kelvin to celsius \n");
   printf("4) Celsius to Kelvin \n");

   scanf("%d", &option);

   switch (option) {
     case 1:
      far_cel();
      break;
     case 2:
      cel_far();
      break;
     case 3:
      kel_cel();
      break;
     case 4:
      cel_kel();
      break;
     default:
      printf("Incorrect option \n");
      break;
  }

   return 0;
}

 void far_cel() {
   float input;
   printf("Give me the fahrenheit grades \n");
   scanf("%f", &input );
   printf("The celsius grades are %f \n", (5*(input-32))/9);
 }

 void cel_far() {
   float input;
   printf("Give me the celsius grades \n");
   scanf("%f", &input );
   printf("The fahrenheit grades are %f \n", (9*input/5)+32);
 }

 void kel_cel() {
   float input;
   printf("Give me the kelvin grades \n");
   scanf("%f", &input );
   printf("The celsius grades are %f \n", input-273.15);
 }

 void cel_kel() {
   float input;
   printf("Give me the celsius grades \n");
   scanf("%f", &input );
   printf("The kelvin grades are %f \n", input+273.15);
 }
