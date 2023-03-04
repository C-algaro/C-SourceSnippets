#include <stdio.h>
#include <locale.h>

main ()
{
	int menu, num1, num2;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("---------------MENU---------------- \n");
	printf("1 - Soma \n");
	printf("2 - Raiz Quadrada \n\n");
	printf("Você escolheu a opção: ");
	scanf(" %d", menu);
	
	if (menu==1)
	{
			printf("Digite Valor 1: ");
			scanf("%d", &num1);
			printf("Digite Valor 2: ");
			scanf("%d", &num2);
			printf("Soma: %d \n\n", num1+num2);
	}
	else if (menu==2)
	
	{
			printf("Digite um Número: ");
			scanf("%d", &num1);
			printf("Raiz Quadrada: %d", num1*num1);
	}
	else 
	{
		printf("Opção Inválida");
	}
}
