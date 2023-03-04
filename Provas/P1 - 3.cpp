#include <stdio.h>
#include <locale.h>

main ()
{
	int num, cont, acum=0, impar;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite 10 Valores: \n\n");
	
	for (cont=1; cont<10; cont++)
	{
		printf("Digite o valor %d: ",cont);
		scanf("%d", &num);
		
		//cont=cont+1;
		
		if(num%2==0)
		{
			acum=acum+num;
		}
		
		if (num%2!=0)
		{
			impar=impar+1;
		}
	}
	
	printf("\n Soma dos Números Pares: %d", acum);
	printf("\n Quantidade de Ímpares: %d \n\n", impar);
}
