#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	char c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Conceito: ");
	scanf("%c", &c);
	
	if (c=='A')
	{
		printf("Pontos: >90 e <=100 \n\n");
	}
	else if (c=='B')
	{
		printf("Pontos: >70 e <=90 \n\n");
	}
	else if (c=='C')
	{
		printf("Pontos: >50 e <=70 \n\n");
	}
	else if (c=='D')
	{
		printf("Pontos: <=50 \n\n");
	}
	
	system ("pause");
}

