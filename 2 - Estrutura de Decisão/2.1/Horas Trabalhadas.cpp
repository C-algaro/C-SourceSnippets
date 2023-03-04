#include <stdio.h>
#include <stdlib.h>

main ()
{
	float a, s;
	
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%f", &a);
	
	s=a*19.50;
	
	if (s>=1500)
	{
		printf("%.2f", s-(s*0.10));
	}
	else
	{
		printf("%.2f", s);
	}
}
