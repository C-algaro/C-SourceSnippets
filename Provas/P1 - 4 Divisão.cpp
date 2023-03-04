#include <stdio.h>
#include <locale.h>

main ()
{
	int menu=1;
	float n1, n2, n3, peso1, peso2, peso3;
	
	setlocale(LC_ALL,"Portuguese");
	
	while (menu==1 ||  menu==2)
	{
		
	printf("\n-------------MENU--------------");
	printf("\n 1 - Média Aritmética");
	printf("\n 2 - Média Ponderada");
	printf("\n 3 - Sair \n\n");
	
	printf("Opção escolhida: ");
	scanf("%d", &menu);
	
	switch (menu)
	{
		case 1:
			printf("\n\n Nota 1: ");
			scanf("%f", &n1);
			printf(" Nota 2: ");
			scanf("%f", &n2);
			
			printf("\n Nota Final: %.0f \n\n", (n1+n2)/2);
			break;
		case 2:
			printf("\n\n Nota 1: ");
			scanf("%f", &n1);
			printf(" Peso da Prova: ");
			scanf("%f", &peso1);
			printf(" Nota 2: ");
			scanf("%f", &n2);
			printf(" Peso da Prova: ");
			scanf("%f", &peso2);
			printf(" Nota 3: ");
			scanf("%f", &n3);
			printf(" Peso da Prova: ");
			scanf("%f", &peso3);
			
			printf("\n Nota Final: %.0f \n\n", (n1/peso1)+(n2/peso2)+(n3/peso3));
		case 3:
			printf(" Saindo .... \n\n");
		default:
			printf(" Comando Inválido \n\n");
	}
}
}
