#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	float vel;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a Velocidade do Ve�culo: ");
	scanf("%f", &vel);
	
	if (vel <=60)
	{
		printf("Sem Penalidade \n\n");
	}
	else if (vel <=80)
	{
		printf("Penalidade: Multa Leve \n\n");
	}
	else if (vel <=100)
	{
		printf("Penalidade: Multa Grave \n\n");
	}
	else if (vel <=120)
	{
		printf("Penalidade: Multa Graviss�ma \n\n");
	}
	else if (vel >120)
	{
		printf("Penalidade: Deten��o do Condutor \n\n");
	}
	
	system ("pause");
}

