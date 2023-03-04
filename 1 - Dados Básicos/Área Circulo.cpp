#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float pi=3.14, raio, area;
	
	printf("Valor do Raio: ");
	scanf("%f", &raio);
	
	system("cls");
	
	area=pi*raio*2;
	printf("Area: %.2f", area);
}
