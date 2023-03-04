#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main ()
{
 float po1, po2;
 float po3,media;  
   setlocale(LC_ALL, "Portuguese");
   
      printf("Nota da Prova 1: ");
      scanf("%f", &po1);
      printf("Nota da Prova 2: ");
      scanf("%f", &po2);
      printf("Nota da Prova 3: ");
      scanf("%f", &po3);
      
      system("cls");
      
      media=(po1+po2+po3)/3;
      printf("Nota Final: %.2f", media);
}
