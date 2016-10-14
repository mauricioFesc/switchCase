#include<stdio.h>
#include<stdlib.h>
/*Programa que cuenta numeros positivos ingresados desde
teclado, finaliza el conteo con cero usando ciclo while*/
int main()
{
  int numero,contador=0;/*contador debe ser inicializado en cero*/
  system("color 80");
  printf("\n\tPrograma cuenta numeros enteros positivos\n");
  printf("\n\tIngrese un numero\t");
  scanf("%i",&numero);
  while(numero!=0){ /*mientras numero sea diferente que cero*/
    contador++;  //equivalente a contador=contador+1;
    printf("\n\tIngrese un numero\t");
    scanf("%i",&numero);
  }
  printf("\n\t Fin del ciclo\n");
  printf("\n\t El total de numeros enteros positivos fue %i \n\n",contador);
  system("PAUSE");
  return 0;
  }
