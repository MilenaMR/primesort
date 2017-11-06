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
  int Primo=1;	// Supomos inicialmente que todos são primos		
/* Primo = TRUE --> primo */
/* Primo = FALSE --> nao é primo */
   
    if (num <= 1 || (num != 2 && num % 2 == 0)){
	Primo = FALSE;}	/* nenhum numero inteiro <= 1 ou par > 2 é primo */
    
    divisor = 3;
    while (Primo && divisor <= num/2) {
	if (num % divisor == 0){
	    Primo=0;}
	divisor = divisor + 2;	
   }
  	
 return Primo;
} 

int main() {

   int num;

   FILE *pipe;	
   pipe = popen ("sort -n -r", "w");

   while (1){
 
	scanf ("%d", &num);	  	
// quando recebe -1 para a ação
	if (num == -1){	
	      break;
  	}
	else { 			
  
             if (primo (num) == 0){  			
		fprintf (pipe,"%d\n",num);	  			  				  				  
 	  				
              }
	}

   }

   pclose(pipe); 
  
   return 0;
}
