#include <stdio.h>

main ()
{
	char sexo;
	
	printf("Informe seu Sexo (M-Masculino e F-Feminino): ");
	scanf("%c", &sexo);
	
	if (sexo=='M')
	{
		printf("Homem");
	}
	else if (sexo=='F')
	{
	    printf("Mulher");	
	}
	else
	{
		printf("Verifique o seu RG! ");
	}
}
