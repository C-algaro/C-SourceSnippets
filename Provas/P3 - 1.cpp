#include<stdio.h>

main()
{
	int num[6];
	int i, cont=0;
	
	for(i=0; i<6; i++)
	{
		printf("Digite o valor do Numero %d: ", i+1);
		scanf("%d", &num[i]);
		
		if(num[i]%2!=0)
		{
			cont=cont+1;
		}
	}
	
	printf("\n Numeros Pares: \n");
	
	for(i=0; i<6; i++)
	{
		if(num[i]%2==0)
		{
			printf("%d \n", num[i]);
		}
	}
	
	printf("\n Quantidade de Numeros Impares: %d", cont);
}

