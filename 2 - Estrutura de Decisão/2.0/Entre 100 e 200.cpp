#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	int a;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um N�mero: ");
	scanf("%d", &a);
	
	if (a>100 && a<200)
	{
		printf("Est� entre 100 e 200");
	}
}

