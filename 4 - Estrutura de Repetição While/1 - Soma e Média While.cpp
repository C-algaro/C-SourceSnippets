#include <stdio.h>
#include <locale.h>

main ()
{
	int num=1, cont=0, acum=0;
	setlocale (LC_ALL,"Portuguese");
	
	while (num>0)
	{
		printf("Valor: ");
		scanf("%d", &num);
		
			if (num!=0)
			{
				cont=cont+1;
				acum=acum+num;
			}
	}
	
	printf("\n Média: %d", acum/cont);
	printf("\n Soma: %d", acum);
}
