#include "conio.h"
#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "time.h"
#include "ctype.h"

char est[32][22] = {
     "Aguascalientes","Baja California","Baja California Sur", "Campeche",
     "Coahuila", "Colima", "Chiapas", "Chihuahua", "Distrito Federal", "Durango",
     "Guanajuato", "Guerrero", "Hidalgo","Guadalajara","Mexico", "Michoacan","Morelos",
     "Nayarit","Monterrey","Oaxaca","Puebla","Queretaro","Quintana Roo",
     "San Luis Potosi","Sinaloa","Sonora","Tabasco","Tamaulipas","Tlaxcala",
     "Veracruz","Yucatan","Zacatecas"
};
char cap[32][22] = {
     "Aguascalientes","Mexicali","La Paz", "Campeche", "Saltillo","Colima",
     "Tuxtla Gutierrez", "Chihuahua", "Ciudad de Mexico", "Durango", "Guanajuato",
     "Chilpancingo", "Pachuca","Jalisco","Toluca", "Morelia","Cuernavaca", "Tepic",
     "Nuevo Leon","Oaxaca","Puebla","Queretaro","Chetumal","San Luis Potosi","Culiacan",
     "Hermosillo","Villahermosa","Ciudad Victoria","Tlaxcala","Xalapa","Merida","Zacatecas"
};

int test();
void score(int);
int ev(char[],char[]);

int main(int argc, char const *argv[]) {

  srand(time(NULL));

  int res, op;

  do {
    system("cls");
    res = test();
    score(res);
    printf("\nSalir? =si 1=no");
    scanf("%d",&op);
  }while(op!=0);
}

int test() {}
  int cont=0,x=0;
  char resp[22];
  for(int i=0;i<9;i++) {
    system("cls");
    x=0+rand()%32;
    printf("%d\t",cont);
    printf("Capital de %s: ",est[x]);
    fflush(stdin);
    gets(resp);
    cont=cont+(ev(resp,cap[x]));
  }
  return cont;
}
int ev(char a[], char b[]) {
  for(int i=0;i<strlen(a);i++) {
    a[i]=toupper(a[i]);
  }
  puts(a);
  for(int j=0;j<strlen(b);j++) {
    b[j]=toupper(b[j]);
  }
  puts(b);
  if(strcmp(a,b)==0) {
   printf("\nRespuesta correcta! ");
   system("PAUSE");
   return 1;

  } else {
    printf("\nRespuesta incorrecta! ");
    system("PAUSE");
    return 0;
  }
}
void score(int resp) {
  if(resp<=5) {
    printf("\nNecesitas estudiar mas :v");
  }
  else if(resp<=8) {
    printf("\nBien hecho!");
  }
  else if(resp==9) {
    printf("\nMuy bien!");
  }
  else {
    printf("\nExcelente! ");
  }
  system("Pause");
}
