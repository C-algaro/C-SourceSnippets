#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main ()
{
	int a;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: ");
	scanf("%d", &a);
	
	if (a%2==0)
	{
		printf("\nSeu número é Par \n\n");
	}
	else
	{
		printf("\nSeu número é Impar \n\n");
	}
	
	system ("pause");
}
