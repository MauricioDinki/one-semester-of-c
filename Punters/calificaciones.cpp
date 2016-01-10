#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int *cal;
char **nom;
int tam;
void registro();
float promedio();
int baja(); 
int alta();
void reporte();
void buscar(int);
main()
{
      int op;
      int cali;
      registro();
      printf("\n\n\n **** CALIFICACIONES **** \n\n");
      printf(" Calificacion mas alta: %i\n",alta());
      printf(" Calificacion mas baja: %i\n",baja());
      reporte();
      printf("\n\n\n **** PROMEDIO **** \n\n");
      printf("\n\n Promedio: %.2f\n",promedio());
      printf("\n\n\n **** BUSCAR **** \n\n");
      printf("\n\n Buscar una calificacion?\n (1 si/ 2 no): ");
      scanf("%d",&op);
      if(op==1)
      {
               printf("\n Calificacion: ");
               scanf("%d",&cali);
               buscar(cali);
      }
      system("Pause");
      system("cls");
      delete cal;
      delete nom;
      system("PAUSE");
}





void registro()
{
	 printf(" **** NOMBRE Y CALIFICACIONES **** \n\n");
     printf("\n Cuantos alumnos va a ingresar?  ");
     scanf("%d",&tam);
     cal = new int[tam];
     nom = new char *[tam];   
     for(int i=0;i<tam;i++)
     {
             nom[i]=new char [30];
     }
     for(int i=0;i<tam;i++)
     {
             fflush(stdin);
             printf("\n Nombre %d: ",i+1);
             gets(nom[i]);
             printf(" Calificacion: ");
             scanf("%d",&cal[i]);
     }
}





float promedio()
{
      float suma=0;
     for(int i=0;i<tam;i++)
     {
             suma=suma+cal[i];
     }
     return (suma/tam);
}




int baja()
{
      int baja=cal[0];
     for(int i=0;i<tam;i++)
     {
             if(baja>cal[i])
             {
                            baja=cal[i];
             }
     }
     return baja;
}





int alta()
{
      int alta=cal[0];
     for(int i=0;i<tam;i++)
     {
             if(alta<cal[i])
             {
                            alta=cal[i];
             }
     }
     return alta;
}








void reporte()
{
     printf("\n\n\n **** REPORTE **** \n\n");
	 for(int i=0;i<tam;i++)
     {
             printf("\n Nombre: %s",nom[i]);
             printf("\t Calificacion: %d \n",cal[i]);
     }
}





void buscar(int cali)
{
     for(int i=0;i<tam;i++)
     {
             if(cal[i]==cali)
             {
                          printf("\n %s \n", nom[i]);
             }
     }
     printf("\n Tienen: %d \n",cali);
}
