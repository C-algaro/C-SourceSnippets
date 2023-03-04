#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	float a, b, c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Valor Primeiro Lado: ");
	scanf("%f", &a);
	printf("Valor Segundo Lado: ");
	scanf("%f", &b);
	printf("Valor Terceiro Lado: ");
	scanf("%f", &c);
	
	if ((b-c)<a<b+c && (a-c)<b<a+c && (a-b)<c<a+b) // if (a<(b+c) && b<(a+c) && c<(a+b));
	{
		printf("\n Estes valores formam um Triângulo");
	}
		else
	{
		printf("\n Estes valores NÂO formam um Triângulo \n\n");
    }
    
	
	if (a==b && a==c && b==c)
	{
		printf("\n Triângulo Equilátero \n\n");
	}
	else if (a==b || a==c || b==c)
	{
		printf("\n Triângulos Isósceles \n\n");
	}
	else if (a!=b && a!=c && b!=c)
	{
		printf("\n Triângulo Escaleno \n\n");
	}
	
	system ("pause");
}

