#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int a, b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um Valor: ");
	scanf("%d", &a);
	printf("Digite um Valor: ");
	scanf("%d", &b);
	
	if (a%b==0)
	{
		printf("É divisível");
	}
	else 
	{
		printf("Não é divísivel");
	}
}
