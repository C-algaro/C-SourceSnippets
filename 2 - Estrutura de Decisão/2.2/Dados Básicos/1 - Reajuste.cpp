#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float valor;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	printf("O Valor com Reajuste é de %.2f \n\n", valor+valor*0.1);
	
	system("pause");
}
