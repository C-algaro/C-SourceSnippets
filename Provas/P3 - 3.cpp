#include<stdio.h>

main()
{
	float custo, convite;
	// quantos convite precisa vender para alcan�ar preco d custo;
	
	printf("Digite o Custo do espetaculo teatral: ");
	scanf("%f", &custo);
	printf("Digite o Custo do Convite: ");
	scanf("%f", &convite);
	
	printf("\n Pelo menos %.0f Convites devem ser vendidos para alcancar preco do custo do Espetaculo. \n", custo/convite);
}

