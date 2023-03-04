#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float lado1, lado2, area;
	
	printf("Digite o Valor do Lado 1: ");
	scanf("%f", &lado1);
	printf("Digite o Valor do Lado 2: ");
	scanf("%f", &lado2);
	
	system("cls");
	
	area=lado1*lado2;
	printf("Area: %.2f", area);
}
