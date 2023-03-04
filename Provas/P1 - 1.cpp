#include <stdio.h>
#include <locale.h>

main ()
{
	int horas, extra;
	float salario, salario_hora, salario_extra, salario_bruto, extra_bruto;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Quantidade de Horas Trabalhadas: ");
	scanf("%d", &horas);
	printf("Horas Extras: ");
	scanf("%d", &extra);
	printf("Salário: ");
	scanf("%f", &salario);
	
	salario_hora = salario*0.125;
	salario_extra = salario*0.25;
	salario_bruto = salario_hora*horas;
	extra_bruto = salario_extra*extra;
	
	printf("\n Salário Bruto: %.2f", salario_bruto);
	printf("\n Horas Extra: %.2f", extra_bruto);
	
	printf("\n\n Salário à receber: %.2f", salario_bruto+extra_bruto);
}
