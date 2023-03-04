#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main ()
{
 float po1, x, po2, y, po3, z, media;
   
   setlocale(LC_ALL, "Portuguese");
   
      printf("Nota da Prova 1: ");
      scanf("%f", &po1);
      printf("Qual é o peso da Prova 1? ");
      scanf("%f", &x);
      
      printf("Nota da Prova 2: ");
      scanf("%f", &po2);
      printf("Qual é o peso da Prova 2? ");
      scanf("%f", &y);
      
      printf("Nota da Prova 3: ");
      scanf("%f", &po3);
      printf("Qual é o peso da Prova 3? ");
      scanf("%f", &z);

   
   system("cls");
   
      media=(po1/x)+(po2/y)+(po3/z);
      printf("Sua Nota Final é: %.0f", media);   // printf("Média = %.2f",(po1+po2)/2);
}
