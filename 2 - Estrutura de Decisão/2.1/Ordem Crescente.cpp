#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int a,b;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor da primeira vari�vel: ");
	scanf("%d", &a);
	printf("Digite o valor da segunda vari�vel: ");
	scanf("%d", &b);
	
	system ("cls");
	
	if (a<b)
	{
		printf("VARI�VEL A: %d \nVARI�VEL B: %d \n\n", a, b);
	}
	else if (b<a)
	{
		printf("VARI�VEL A: %d \nVARI�VEL B: %d \n\n", b, a);
	}
	else
	{
		printf("Os Valores %d e %d s�o iguais", a, b);
	}
}
