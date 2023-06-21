/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define P 3
#define A 10
  /*-parte 2 (matriz)- */

int main()
{
    float notas[P][A];
    int i,j;
    
 /* -> 1- criando uma matriz 3x10,onde 3 (i) sao as notas e 10(j) sao os alunos<- */
    
    printf(" Preencha as notas: \n");
    for(i=0; i<P; i++){
        printf("\n\n Notas da Prova %d \n\n", i+1);
        for (j=0; j<A; j++) {
            printf(" Nota do Aluno %d:\n",j+1);
            scanf("%f", &notas[i][j] );
        }
        
    }
    
 /* -> 2- determinando a media do aluno e dizendo se foi aprovado ou nao ( media 6) <- */  
    
    printf("Media do Aluno \n");
    for (j=0; j<A; j++) {
        float media=0;
        for(i=0; i<P; i++) {
            media += notas [i][j];
        }
        
        media /= P;
        printf("A %d - Media: %.2f -", j + 1, media);
        if (media >= 6.0 ) {
            printf("aprovado\n");
        }
        else{
            printf("Reprovado\n");
        }
    }
    
/* -> 3-Retornar para cada uma das tres provas a maior, a menor e a media das notas <- */

    printf("Levantamento das provas:\n");
    for (i=0; i<P; i++) {
       float soma=0;
       float maior=notas[i][0];
       float menor=notas[i][0];
       
       for (j=0; j<A; j++) {
           soma+=notas[i][j];
           
           if(notas[i][j]>maior) {
              maior=notas[i][j];
           }
           
           if(notas[i][j]<menor) {
              menor=notas[i][j];
           }
       }
       
       float media = soma / A;

        printf("Prova %d - Maior: %.2f - Menor: %.2f - Media: %.2f\n", i + 1, maior, menor, media);
    }
    
    return 0;
    
}


