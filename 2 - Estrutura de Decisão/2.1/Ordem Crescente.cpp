#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int a,b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor da primeira variável: ");
	scanf("%d", &a);
	printf("Digite o valor da segunda variável: ");
	scanf("%d", &b);
	
	system ("cls");
	
	if (a<b)
	{
		printf("VARIÁVEL A: %d \nVARIÁVEL B: %d \n\n", a, b);
	}
	else if (b<a)
	{
		printf("VARIÁVEL A: %d \nVARIÁVEL B: %d \n\n", b, a);
	}
	else
	{
		printf("Os Valores %d e %d são iguais", a, b);
	}
}
