#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int a, b, c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um Número: ");
	scanf("%d", &a);
	printf("Digite outro Número: ");
	scanf("%d", &b);
	
	c=a+b;
	
	if(c>20)
	{
		printf("\n%d \n\n", c+8);
	}
	else
	{
		printf("\n%d \n\n", c-5);
	}
	
	system ("pause");
}
