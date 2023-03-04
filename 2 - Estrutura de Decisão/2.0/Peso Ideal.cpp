#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	float h;
	char s;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Considere: \n\n   <H> Homem; \n   <M> Mulher; \n\n Você é: ");
	scanf("%c", &s);
	printf("\n\nQual é a sua Altura? ");
	scanf("%f", &h);
	
	if (s=='H')
	{
		printf("\n\nSeu Peso Ideal é: %.2f\n\n", (72.7*h)-58);
	}
	else if (s=='M')
	{
		printf("\n\nSeu Peso Ideal é: %.2f \n\n", (62.1*h)-44.7);
	}
	
	system ("pause");
}

