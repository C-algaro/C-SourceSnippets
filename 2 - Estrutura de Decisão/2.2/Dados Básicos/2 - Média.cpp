#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	int a, b, c, media;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o Valor 1: ");
	scanf("%d", &a);
	printf("Digite o Valor 2: ");
	scanf("%d", &b);
	printf("Digite o Valor 3: ");
	scanf("%d", &c);
	
	media=(a+b+c)/3;
	
	printf("A média dos três valores é: %d \n\n", media);
	
	system("pause");
}
