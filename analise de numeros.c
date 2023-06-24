/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>


  /*1-ler cada numero individualmente e verificar se este é primo,calcularr
  a seu fatorial e sua rai quadrada. */
 
 int main()
{      
    /* declarando os numeros (n) e colocando o tamanho(t) da  array */
    
    float n[]={3, 4, 5, 1, 43, 9, 32};
    int t = 5;
    
    /* fazendo um loop para repetir os elementos da array (n), sendo cada elemento armazenado em nx "*/
   
    for(int i=0; i<t; i++){
        int nx=n[i];
        printf("\n Numero: %d \n", nx);
        
     /* a verificaçao se o numero é primo*/
    
        int p=1;
        if (nx <= 1){
            p=0;
        }
        else {
            for(int j=2; j<=sqrt(nx); j++){
                if (nx%j==0) {
                    p=0;
                    break;
                }
            }
        }
    
        if (p){
            printf("\n Primo:Sim \n");
        }
        else {
            printf("\n Primo:Nao \n");
        }
        
        /* calculando o fatorial dos numeros, utilizando a variavel fat
        com 1 e depois fazer um loop para multiplicar do 2 ate o numero final */
        
        double fat=1;
        for(int j=2; j<=nx; j++) {
            fat*=j;
        }
        
        printf("\n Fatorial: %lf \n", fat);
        
        /*calculando agora a raiz quadrada dos numeros, utilizando a variavel
        r para representar a raiz do numero*/
        
        double r= sqrt(nx);
        
        printf("\n Raiz Quadrada: %.2f \n\n",r);
        
    }
    
    

    return 0;
}
    


