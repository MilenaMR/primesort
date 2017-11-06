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
/*   int divisor;		        
  int numdiv=0;     
  int Primo;			
/* Primo = TRUE --> primo */
/* Primo = FALSE --> nao é primo */
   
  /*   
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
*/
	
	int num,			/* numero a ser lido e testado */
     d,				/* candidato a divisor */
     EhPrimo;			/* para indicar se o numero dado n 'e primo ou nao     */
	/* Convencao: EhPrimo = TRUE se o numero dado 'e primo */
	/*  EhPrimo = FALSE se o numero dado nao 'e primo        */
   

    printf("Forneca um numero inteiro positivo ===> ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);


    if (num <= 1 || (num != 2 && num % 2 == 0))
	EhPrimo = FALSE;	/* nenhum numero inteiro <= 1 ou par > 2 e' primo */
    else
	EhPrimo = TRUE;		/* o numero e' primo ate que se prove o contrario */


    d = 3;
    while (EhPrimo  && d <= num / 2) {
	if (num % d == 0)
	    EhPrimo = 0;
	d = d + 2;		/* testamos so' os  impares: 3, 5, 7... */
    }

    if (EhPrimo)
	printf("%d e' primo \n", num);
    else
	printf(" %d nao e' primo \n", num);
 return EhPrimo;
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
