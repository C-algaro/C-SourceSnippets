#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main ()
{
	float a;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &a);
	
	if (a>=0)
	{
		printf("A Raiz Quadrada � %.2f \n\n", sqrt(a));  // sqrt(n�mero)
	}
	else
	{
		printf("O Quadrado do n�mero � %.2f \n\n", pow(a, 2));
	}
	
	system ("pause");
}
