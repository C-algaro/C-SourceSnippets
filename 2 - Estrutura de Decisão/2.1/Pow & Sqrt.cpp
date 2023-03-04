#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main ()
{
	float a;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &a);
	
	if (a>=0)
	{
		printf("A Raiz Quadrada é %.2f \n\n", sqrt(a));  // sqrt(número)
	}
	else
	{
		printf("O Quadrado do número é %.2f \n\n", pow(a, 2));
	}
	
	system ("pause");
}
