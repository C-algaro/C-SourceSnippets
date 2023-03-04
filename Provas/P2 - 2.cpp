#include<stdio.h>

main()
{
	int num[5], i;
	
	for(i=0; i<5; i++)
	{
		printf("Digite Num %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	printf("\n Numeros Divisiveis por 2: \n");
	
	for(i=0; i<5; i++)
	{	
		if(num[i]%2==0)
		{
			printf("%d \n", num[i]);
		}
	}
	
	printf("\n Numeros Divisiveis por 3: \n");
	
	for(i=0; i<5; i++)
	{	
		if(num[i]%3==0)
		{
			printf("%d \n", num[i]);
		}
	}
	
	printf("\n Numeros Divisiveis por 2 e 3: \n");
	
	for(i=0; i<5; i++)
	{	
		if(num[i]%2==0 && num[i]%3==0)
		{
			printf("%d \n", num[i]);
		}
	}
}
