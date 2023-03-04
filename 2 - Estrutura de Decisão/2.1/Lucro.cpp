#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float p;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor da compra: ");
	scanf("%f", &p);
	
	system("cls");
	
	if (p<20)
	{
		printf("Valor da Venda: %.2f", p+(p*0.45));
	}
	else
	{
		printf("Valor da Venda: %.2f", p+(p*0.3));
	}
	system("pause");
}
