#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
   int A, B, C, resultado;
   
   printf("Digite o Valor A: ");
   scanf("%d" , &A);
   printf("Digite o Valor B: ");
   scanf("%d", &B);
   printf("Digite o valor C: ");
   scanf("%d", &C);
   
   system("cls");
   
   resultado=(A*A)+(B*B)+(C*C);
   printf("Resultado Final: %d", resultado);
}
