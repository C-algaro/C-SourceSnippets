#include<stdio.h>

main()
{
	float matriz[3][3];
	int l, c;
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			printf("Digite valor [%d][%d]: ", l, c);
			scanf("%f", &matriz[l][c]);
		}
	}
	
	printf("\n Valores Acima da Diagonal Principal: \n");
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			if(l<c)
			{
				printf("%.0f \n", matriz[l][c]);
			}
		}
	}
	
	printf("\n Valores Abaixo da Diagonal Principal: \n");
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			if(l>c)
			{
				printf("%.0f \n", matriz[l][c]);
			}
		}
	}
}
