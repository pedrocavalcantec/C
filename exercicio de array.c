/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

  /* - parte 1 ( vetor) - */
  
  int main() {
    float vetor[10];
    int i;
  
  /* -> 1- preenchendo o vetor com 10 valores reais em loop <- */
  
 printf("Digite 10 valores reais:\n");
    for (i=0; i<10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
    
 /* -> 2-escrevendo os retornos o maior,o menor,o desvio padrao e a media dos valores do vetor <-*/ 
 
    float maior = vetor[0];
    for (i=0; i<10; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }
 printf("\n Maior valor: %.3f\n", maior);
     
    float menor= vetor[0];
    for(i=0; i<10; i++) {
        if(vetor[i]<menor)
        menor=vetor[i];
     }
printf("\n Menor valor: %.3f \n", menor);     
    
    float soma=0;
    for(i=0; i<10 ;i++) {
        soma += vetor[i];
    }
    float media=soma/10;
printf("\n Media:%.3f \n",media);

    float soma2=0;
    for(i=0;i<10;i++) {
        soma2+=pow(vetor[i] - media, 2);
    }
    float desvioPadrao=sqrt(soma2/10);
printf("\n Desvio Padrao: %.3f \n", desvioPadrao);    
    
    
    return 0;
  }    
    
    


