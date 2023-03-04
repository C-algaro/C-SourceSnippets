#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int num1, num2, soma;
	
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o Valor 1: ");
	scanf("%d", &num1);
	
	printf("Digite o Valor 2: ");
	scanf("%d", &num2);
	
	system("cls");
	
	soma=num1+num2;
	printf("%d + %d = %d \n\n", num1, num2, num1+num2); // print("O Resultado é: %d", soma);
}
