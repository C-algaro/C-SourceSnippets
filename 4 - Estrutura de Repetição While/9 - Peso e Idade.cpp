#include <stdio.h>
#include <locale.h>

main ()
{
	float idade=1, peso, cont, acum, cont1, cont2, cont3;
	setlocale (LC_ALL,"Portuguese");
	
	while (idade>0)
	{
		printf("\nIdade: ");
		scanf("%f", &idade);
		printf("Peso: ");
		scanf("%f", &peso);
		
			if (idade>0)
			{
			cont=cont+1;
			acum=acum+idade;
			}
		
				if(peso>90)
				{
					cont1=cont1+1;
				}
				if(idade>18 && peso<60);
				{
					cont2=cont2+1;
				}
				if(idade>=10 && idade <=30)
				{
					cont3=cont3+1;
				}
	}
	
	printf("\n Peso Acima de 90kg: %.0f Pessoas;", cont1);
	printf("\n Média das Idades: %.1f;", acum/cont);
	printf("\n Maiores de Idade e Peso Abaixo de 60kg: %.0f Pessoas; ***", cont2);
	printf("\n Entre 10 e 30 Anos: %.0f por Cento;", cont3/cont*100);
}
