#include <stdio.h>
#include <string.h>  

int main(){

{
    char senha[50]; //vari�vel que vai receber a senha do usu�rio
    int contador = 0; //vari�vel que vai ser usada para contar os caracteres da senha do usu�rio


    printf("Vamos criar uma senha forte, para isso precisamos que ela: \nPossua no minimo 6 caracteres. \nContenha no minimo 1 digito. \nContenha no minimo 1 letra em minusculo. \nContenha no minimo 1 letra em maiusculo. \nContenha no minimo 1 caractere especial. \nOs caracteres especiais sao: !@#$%^&*()-+ \nAgora digite sua senha abaixo:\n");
    scanf("%s", senha);
    
        for(int i = 0; i < strlen(senha); i++) //esse loop � para contar os characteres
		
		{  
        	if(senha[i] != ' ')  
            	contador++;  
            
        }
            
        
        if (contador>=6)  //aqui � a compara��o entre o contador e a string	
			
			
			printf("Sua senha tem mais de 6 d�gitos.");
						                    
    	else
    	
    	   printf("Voce precisa adicionar + %d characteres a sua senha.\n", 6-contador);                     


		}


return 0;


}


