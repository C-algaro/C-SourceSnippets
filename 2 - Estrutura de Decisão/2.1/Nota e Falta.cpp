#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main ()
{
	float a, b, c;
	int f;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Nota da Primeira Prova: ");
	scanf("%f", &a);
	printf("Nota da Segunda Prova: ");
	scanf("%f", &b);
	printf("Nota da Terceira Prova: ");
	scanf("%f", &c);
	printf("Quantidade de faltas: ");
	scanf("%d", &f);
	
	system("cls");
	
	if ((a+b+c)/3 >= 7 && f <= 80*0.25)
	{
		printf("M�dia: APROVADO \nFalta: APROVADO");
	}
	else if ((a+b+c)/3 >= 7 && f > 80*0.25)
	{
		printf("M�dia: APROVADO \nFalta: REPROVADO");
	}
	else if ((a+b+c)/3 < 7 && f <= 80*0.25)
	{
		printf("M�dia: REPROVADO \nFalta: APROVADO");
	}
	else
	{
		printf("M�dia: REPROVADO \nFalta: REPROVADO");
	}
	
	system("pause");
}
