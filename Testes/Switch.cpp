#include <stdio.h>
#include <stdlib.h> // system (pause)  / system (cls)

int main ()
{
	int cod;
	float preco;
	
	printf("PRODUTO X \n");
	printf("Preco: \n");
	scanf("%f", &preco);
	printf("Codigo do Produto: \n");
	scanf("%d", &cod);
	system("cls");
	
	switch(cod)
	{
		case 1:   // caso
		printf("Procedencia do produto: SUL \n");
		printf("Preco: %.2f", preco);
		break;
		
		case 2:
		printf("Procedencia do produto: NORTE \n");
		printf("Preco: %.2f", preco);
		break;
		
		case 3:
		printf("Procedencia do produto: LESTE \n");
		printf("Preco: %.2f", preco);
		break;
		
		case 4:
		printf("Procedencia do produto: OESTE \n");
		printf("Preco: %.2f", preco);
		break;
		
		case 5:
		printf("Procedencia do produto: NORDESTE \n");
		printf("Preco: %.2f", preco);
		break;
			
		case 6:
		printf("Procedencia do produto: NORDESTE \n");
		printf("Preco: %.2f", preco);
		break;
		
		default:
		printf("Produto importado");
	}
	
}



// Programa Noob
// Float s�o n�meros reais como 1,99 e 0,89
// %f de float 
// %.2f coloca apenas dois n�meros depois da casa
// & para ler o que o cara digitar
// Switch seria a forma de reduzir a necessidade de usar if e else toda vez que o programa necessitar impor uma a��o algu�m
// System (cls) limpa a tela
