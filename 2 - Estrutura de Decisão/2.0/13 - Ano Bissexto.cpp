#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o Ano: ");
	scanf("%d", &b);
	
	if (b%4==0 && (b%100!=0 || b%400==0))
	{
		printf("\n%d � um Ano Bissexto \n\n", b);
	}
	else
	{
		printf("\n%d N�O � um Ano Bissexto \n\n", b);
	}
	
	system ("pause");
}
