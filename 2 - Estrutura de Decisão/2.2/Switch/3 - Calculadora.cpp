#include <stdio.h>
#include <locale.h>

main ()
{
	float x1, x2;
	char op;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("----------------CALCULADORA----------------- \n\n");
	printf("Operadores Dispon�veis: \n");
	printf("- '+' : Soma \n");
	printf("- '-' : Subtra��o \n");
	printf("- '*' : Multplica��o \n");
	printf("- '/' : Divis�o \n");
	printf("- '%%' : Resto da Divis�o \n");
	
	printf("\n Para Sair Digite '0' Tr�s Vezes Seguido de Enter \n\n");
	
for ( x1=1, op='1', x2=1; x1!=0 && op!='0' && x2!=0; x1+0)
{
	
	scanf(" %f", &x1);
	scanf(" %c", &op);
	scanf(" %f", &x2);
	
	switch (op)
	{
		case '+': printf("%.0f", x1+x2); break;
		case '-': printf("%.0f", x1-x2); break;
		case 'x':
		case 'X':
		case '*': printf("%.0f", x1*x2); break;
		case '/':
		case ':': printf("%.0f", x1/x2); break;
		case '%': printf("%d", (int) x1 % (int) x2 ); break;
	}
	
	printf("\n\n");
}

}
