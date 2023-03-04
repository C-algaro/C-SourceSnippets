#include <stdio.h>

main ()
{
	float conta;
	int mes;
	
	printf("Valor da Conta: ");
	scanf("%f", &conta);
	printf("Quantidade de meses em atraso: ");
	scanf("%d", &mes);
	
	switch (mes)
	{
		
	case 1:
		printf("Valor à pagar: %.1f", mes*0.1*conta+conta);
		break;
	case 2:
		printf("Valor à pagar: %.1f", mes*0.1*conta+conta);
		break;
	case 3:
		printf("Valor à pagar: %.1f", mes*0.1*conta+conta);
		break;
	case 4:
		printf("Valor à pagar: %.1f", mes*0.1*conta+conta);
		break;
	case 5:
		printf("Valor à pagar: %.1f", mes*0.1*conta+conta);
		break;
	}
}
