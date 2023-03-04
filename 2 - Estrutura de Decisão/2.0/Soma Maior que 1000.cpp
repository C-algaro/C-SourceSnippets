#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int a, b, c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um Valor: ");
	scanf("%i", &a);
	printf("Digite outro Valor: ");
	scanf("%d", &b);
	
	c=a+b;
	
	if (c>1000)
	{
		printf("Maior que 1000 \n\n");
	}
	else if (c==1000)
	{
		printf("Seu valor é 1000 \n\n");
	}
	else
	{
		printf("Menor que 1000 \n\n");
	}
	
	system ("pause");
}
