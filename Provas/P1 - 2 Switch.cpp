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
	scanf("%d", &menu);
	
	switch (menu)
	{
		case 1:
			printf("\n Digite Valor 1: ");
			scanf("%d", &num1);
			printf(" Digite Valor 2: ");
			scanf("%d", &num2);
			printf("\n Soma: %d \n\n", num1+num2);
			break;
		case 2:
			printf("Digite um Número: ");
			scanf("%d", &num1);
			printf("\nRaiz Quadrada: %d", num1*num1);
			break;
		default:
			printf("\n Opção Inválida");
	}
}
