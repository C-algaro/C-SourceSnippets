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
		printf("\n Estes valores formam um Tri�ngulo");
	}
		else
	{
		printf("\n Estes valores N�O formam um Tri�ngulo \n\n");
    }
    
	
	if (a==b && a==c && b==c)
	{
		printf("\n Tri�ngulo Equil�tero \n\n");
	}
	else if (a==b || a==c || b==c)
	{
		printf("\n Tri�ngulos Is�sceles \n\n");
	}
	else if (a!=b && a!=c && b!=c)
	{
		printf("\n Tri�ngulo Escaleno \n\n");
	}
	
	system ("pause");
}

