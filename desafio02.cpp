#include <stdio.h>
#include <string.h>  

int main(){

{
    char senha[50]; //variável que vai receber a senha do usuário
    int contador = 0; //variável que vai ser usada para contar os caracteres da senha do usuário


    printf("Vamos criar uma senha forte, para isso precisamos que ela: \nPossua no minimo 6 caracteres. \nContenha no minimo 1 digito. \nContenha no minimo 1 letra em minusculo. \nContenha no minimo 1 letra em maiusculo. \nContenha no minimo 1 caractere especial. \nOs caracteres especiais sao: !@#$%^&*()-+ \nAgora digite sua senha abaixo:\n");
    scanf("%s", senha);
    
        for(int i = 0; i < strlen(senha); i++) //esse loop é para contar os characteres
		
		{  
        	if(senha[i] != ' ')  
            	contador++;  
            
        }
            
        
        if (contador>=6)  //aqui é a comparação entre o contador e a string	
			
			
			printf("Sua senha tem mais de 6 dígitos.");
						                    
    	else
    	
    	   printf("Voce precisa adicionar + %d characteres a sua senha.\n", 6-contador);                     


		}


return 0;


}


