//PROBLEMA
//1º João tem 1,50 de altura e cresce 2cm
//2º por ano
//3º enquanto Maria tem 1,10 e cresce 3 cm

//Faça um programa que mostre quantos anos serão necessário para Maria ser maior que João.

    //while - enquanto
    //int - inteiro 12 10 9
    //= - atribuindo
    // %d significa números inteiro
    // \n pula linha, procure colocar entre as aspas
    
#include<stdio.h>
int main()
{
    int joao; // variável vai armazenar o valor que tu dará no futuro 
    int maria;
    int ano;
    
    joao=150;
	maria=110;
	ano=0;
	
while(maria<=joao)
{
    maria=maria+3;
	joao=joao+2;
	ano=ano+1;	
}

 printf("Altura Maria: %d \n", maria);  // Não havia necessidade, não fazia parte o problema
 printf("Altura Joao: %d \n", joao);    // Não havia necessidade, não fazia parte o problema
 printf("Anos: %d \n", ano);
 
}    
