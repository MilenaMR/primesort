/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#define TRUE 1
#define FALSE 0


int primo (int num){		
   int divisor;		        
  int numdiv=0;     
  int Primo;			
/* Primo = TRUE --> primo */
/* Primo = FALSE --> nao é primo */
   
     
    for(divisor=1; divisor < num+1; divisor++){
              if(num % divisor == 0){
                   numdiv++;
              }                    
    }
    
	      	      
    if (numdiv==2){
        Primo = 1; 
//	printf("é primo\n");
    }

    else{
	Primo = 0; 
//	printf("não é primo\n");
    }

 return Primo;
} 

int main() {

   int num;

   FILE *pipe;	
   pipe = popen ("sort -n -r", "w");

   while (1){
 
	scanf ("%d", &num);	  	
// só aceita numeros positivo
	if (num == -1){	
	     // printf("acabou\n");  		
	      break;
  	}
	else { 			
  
             if (primo (num) == 0){  			
		fprintf (pipe,"%d\n",num);	  			  				  				  			//printf("estou aqui\n");
 	  				
              }
	}

   }

   pclose(pipe); 
  
   return 0;
}
