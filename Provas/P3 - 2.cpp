#include<stdio.h>

main()
{
	float matriz[3][3];
	int l, c, acum, media=0;
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			printf("Digite valor [%d][%d]: ", l, c);
			scanf("%f", &matriz[l][c]);
		}
	}
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			if(l<c)
			{
				acum=acum+matriz[l][c];
			}
			
			if(l>c)
			{
				media=media+matriz[l][c];
			}
		}
	}
	
	printf("\n Soma dos Elementos Acima da Diagonal Principal: %d", acum);
	printf("\n Media dos Elementos Abaixo da Diagonal Principal: %d", media/9);

}
