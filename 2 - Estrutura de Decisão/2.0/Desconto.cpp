#include <stdio.h>

main()
{
	float x;
	
	printf("Digite o Valor da Compra: ");
	scanf ("%f", &x);
	
	if (x<1000)
	{
		printf("%.2f", x-x*0.1);
	}
	else if (x>5000)
	{
		printf("%.2f", x-x*0.3);
	}
	else
	{
		printf("%.2f", x-x*0.2);
	}
}
