//PROBLEMA
//1� Jo�o tem 1,50 de altura e cresce 2cm
//2� por ano
//3� enquanto Maria tem 1,10 e cresce 3 cm

//Fa�a um programa que mostre quantos anos ser�o necess�rio para Maria ser maior que Jo�o.

    //while - enquanto
    //int - inteiro 12 10 9
    //= - atribuindo
    // %d significa n�meros inteiro
    // \n pula linha, procure colocar entre as aspas
    
#include<stdio.h>
int main()
{
    int joao; // vari�vel vai armazenar o valor que tu dar� no futuro 
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

 printf("Altura Maria: %d \n", maria);  // N�o havia necessidade, n�o fazia parte o problema
 printf("Altura Joao: %d \n", joao);    // N�o havia necessidade, n�o fazia parte o problema
 printf("Anos: %d \n", ano);
 
}    
