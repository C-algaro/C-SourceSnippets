#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int a;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um Número: ");
	scanf("%d", &a);
	
	if (a>100 && a<200)
	{
		printf("Está entre 100 e 200");
	}
}

