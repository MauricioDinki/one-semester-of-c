#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
float *est;//Declaración de apuntador para la estatura 
char **nom;//Declaración de apuntador para el nombre (Como es bidimensional se utiliza doble asterisco)
int tam;//Variable para el tamaño de los arrays
void registro();
float promedio();
float baja(); 
float alta();
void reporte();
void buscar(float);
main()
{
      int op;
      float estatu;
      registro();
      printf("\n\n\n **** ESTATURAS **** \n\n");
      printf(" Estatura mas alta: %.2f\n",alta());
      printf(" Estatura mas baja: %.2f\n",baja());
      reporte();
      printf("\n\n\n **** PROMEDIO **** \n\n");
      printf("\n\n Promedio: %.2f\n",promedio());
      printf("\n\n\n **** BUSCAR **** \n\n");
      printf("\n\n Buscar una estatura?\n (1 si/ 2 no): ");
      scanf("%d",&op);
      if(op==1)
      {
               printf("\n Estatura: ");
               scanf("%f",&estatu);
               buscar(estatu);
      }
      system("Pause");
      system("cls");
      delete est;//Se eliminan los apuntadores de la memoria dinámica al finalizar la ejecución
      delete nom;
      system("PAUSE");
}
void registro()
{
     printf(" **** NOMBRE Y ESTATURAS **** \n\n");
	 printf("\n Cuantos alumnos va a ingresar? ");
     scanf("%d",&tam);//Se lee el tamaño de los arrays
     est = new float[tam];//Asignación de memoria dinámica para la estatura con el tamaño dado
     nom = new char *[tam];//Asignación de memoria dinámica para la 1ra dimensión del arreglo nom
     for(int i=0;i<tam;i++)
     {
             nom[i]=new char [30];//En este for a cada elemento del arreglo nom le asignamos un ancho de 30 caracteres
     }
     for(int i=0;i<tam;i++)
     {
             fflush(stdin);
             printf("\n Nombre %d: ",i+1);
             gets(nom[i]);
             printf(" Estatura: ");
             scanf("%f",&est[i]);
     }
}
float promedio()
{
      float suma=0;
     for(int i=0;i<tam;i++)//Todas las estructuras "for" del programa deben llevar como parametro de referencia la variable tam, por eso se declaro de manera global
     {
             suma=suma+est[i];
     }
     return (suma/tam);
}
float baja()
{
      float baja=est[0];
     for(int i=0;i<tam;i++)
     {
             if(baja>est[i])
             {
                            baja=est[i];
             }
     }
     return baja;
}
float alta()
{
	
      float alta=est[0];
     for(int i=0;i<tam;i++)
     {
             if(alta<est[i])
             {
                            alta=est[i];
             }
     }
     return alta;
}
void reporte()
{
	
	 printf("\n\n\n **** REPORTE **** \n\n");
     for(int i=0;i<tam;i++)
     {
             printf("\n\ Nombre: %s",nom[i]);
             printf("\t Estatura: %.2f \n",est[i]);
     }
}
void buscar(float estatu)
{
     for(int i=0;i<tam;i++)
     {
             if(est[i]==estatu)
             {
                          printf("\n %s \n ", nom[i]);
             }
     }
     printf("\n Miden: %.2f \n ",estatu);
}
