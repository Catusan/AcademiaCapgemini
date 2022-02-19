#include <stdio.h>
int main(){

int numero; //essa variável vai receber o input
int loop_linhas; //essa variável vai controlar o looping de criação de linhas
int asterisco; //essa variável vai controlar o loop dos asteriscos
int espaco;  //essa variável vai controlar o loop dos espaços


printf ("Vamos construir uma escada! \nEscreva quantos degraus voce quer na sua escada:\n");
scanf ("%d", &numero);

for (loop_linhas=numero; loop_linhas >= 0; loop_linhas--) //esse loop é para contar a quantidade de linhas
	
	{
	
		for (espaco=numero-loop_linhas; espaco <= numero; espaco++) //esse loop é para contar a quantidade de espaços
	
			{
	
				printf (" ");	
		
			}
	
		for (asterisco=loop_linhas; asterisco < numero; asterisco++) //esse loop é para contar a quantidade de *
	
			{
	
				printf ("*");	
		
			}
		
		
		printf ("\n"); //esse printf é para pular para a linha de baixo
	}



return 0;


}


