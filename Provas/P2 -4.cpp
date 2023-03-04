#include<stdio.h>

main()
{
		float matriz[3][3];
	int l, c, acum;
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			printf("Digite valor [%d][%d]: ", l, c);
			scanf("%f", &matriz[l][c]);
			
			acum=acum+matriz[l][c];
		}
	}
	
	printf("\n Soma dos elementos da Matriz: %d", acum);
	printf("\n Media dos Elementos da Diagonal Principal: %d", acum/9);
}
