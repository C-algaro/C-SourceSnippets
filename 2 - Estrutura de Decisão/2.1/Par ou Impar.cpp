#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main ()
{
	int a;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	
	if (a%2==0)
	{
		printf("\nSeu n�mero � Par \n\n");
	}
	else
	{
		printf("\nSeu n�mero � Impar \n\n");
	}
	
	system ("pause");
}
