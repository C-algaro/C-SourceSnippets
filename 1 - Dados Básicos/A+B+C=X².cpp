#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int A, B, C, resultado;
	
	printf("Digite o Valor A: ");
	scanf("%d", &A);
	printf("Digite o Valor B: ");
	scanf("%d", &B);
	printf("Digite o Valor C: ");
	scanf("%d", &C);
	
	system("cls");
	
	resultado=(A+B+C);
	printf("Resultado Final: %d", resultado*resultado);
}
