#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int a, b, c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um N�mero: ");
	scanf("%d", &a);
	printf("Digite outro N�mero: ");
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
