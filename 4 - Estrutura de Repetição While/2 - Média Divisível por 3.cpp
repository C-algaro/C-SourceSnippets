#include <stdio.h>
#include <locale.h>

main ()
{
	int num=1, cont=0, acum=0;
	setlocale (LC_ALL,"Portuguese");
	
	while(num!=0)
	{
		printf("N�mero: ");
		scanf("%d", &num);
		
			if (num%3==0 && num!=0)
			{
				cont=cont+1;
				acum=acum+num;
			}
	}
	
	printf("\n M�dia dos n�meros Divis�veis por 3: %d", acum/cont);
}
