#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	char c;
	float l;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nQual Combustível o Senhor deseja comprar? \n   a-Álcool; \n   d-Diesel; \n   g-Gasolina; \n\nQuero: ");
	scanf("%c", &c);
	printf("\nQuantos Litros Você Deseja? ");
	scanf("%f", &l);
	
	if (c=='a')
	{
		printf("\n\n   Total a Pagar: R$%.2f", 1.7997*l);
	}
	else if (c=='d')
	{
		printf("\n\n   Total a Pagar: R$%.2f", 0.9798*l);
	}
	else if (c=='g')
	{
		printf("\n\n   Total a Pagar: R$%.2f", 2.1009*l);
	}
	
	system("pause");
}

