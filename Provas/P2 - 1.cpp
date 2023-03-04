#include<stdio.h>

main()
{
	int idade[5], i, media;
	int acum;
	
	for(i=0; i<5; i++)
	{
		printf("Digite a idade %d: ", i+1);
		scanf("%d", &idade[i]);
		
		acum=acum+idade[i];
	}
	
	media=acum/5;
	printf("\n Idades acima da media: \n");
	
	for(i=0; i<5; i++)
	{
		if(idade[i]>media)
		{
			printf("%d \n", idade[i]);
		}
	}
}
