#include <stdio.h>
int main(){

int numero; //essa vari�vel vai receber o input
int loop_linhas; //essa vari�vel vai controlar o looping de cria��o de linhas
int asterisco; //essa vari�vel vai controlar o loop dos asteriscos
int espaco;  //essa vari�vel vai controlar o loop dos espa�os


printf ("Vamos construir uma escada! \nEscreva quantos degraus voce quer na sua escada:\n");
scanf ("%d", &numero);

for (loop_linhas=numero; loop_linhas >= 0; loop_linhas--) //esse loop � para contar a quantidade de linhas
	
	{
	
		for (espaco=numero-loop_linhas; espaco <= numero; espaco++) //esse loop � para contar a quantidade de espa�os
	
			{
	
				printf (" ");	
		
			}
	
		for (asterisco=loop_linhas; asterisco < numero; asterisco++) //esse loop � para contar a quantidade de *
	
			{
	
				printf ("*");	
		
			}
		
		
		printf ("\n"); //esse printf � para pular para a linha de baixo
	}



return 0;


}


