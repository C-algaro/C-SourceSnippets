#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Idade: ");
	scanf("%d", &i);
	
	if (i<=2)
	{
		printf("Bebê \n\n");
	}
	else if (i<=12)
	{
		printf("Criança \n\n");
	}
	else if (i<=23)
	{
		printf("Adolescente \n\n");
	}
	else if (i<70)
	{
		printf("Adulto \n\n");
	}
	else
	{
		printf("Idoso \n\n");
	}
	
	system("pause");
	
}
