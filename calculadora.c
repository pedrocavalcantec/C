/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "calc.h"
#include <math.h>

int soma(int a, int b)
{
    return a+b;
}

int subtraçao(int a, int b)
{
    return a-b;
}
    
int multiplicaçao(int a, int b)
{
    return a*b;
}

float divisao( float a, float b)
{
    return a/b;
}

int fatorial(int n)
{
    if(n==0)
     return 1;
    else
     return n*fatorial(n-1);
}

float cr(float radianos)
{
    return cos(radianos);
}

double cg(double graus)
{
    double radianos=graus*(M_PI/180.0);
    return cos(radianos);
}  

int sd (int numero)
{
    int soma=0;
    while(numero != 0) {
        soma+=numero%10;
        numero/=10;
    }
    return soma;
}

double rq (double numero)
{
    return sqrt(numero);
}

int main() {
    int opçao;
    int a, b, ri;
    float rf;
    double rd;
    
    printf("\n Calc \n");
    printf("\n 1. Soma \n");
    printf("\n 2. Sub \n");
    printf("\n 3. Mult \n");
    printf("\n 4. Div \n");
    printf("\n 5. Fat \n");
    printf("\n 6. Cosseno radiano \n");
    printf("\n 7. Cosseno graus \n");
    printf("\n 8. Soma dos digitos \n");
    printf("\n 9. Raiz quadradas \n");
    printf("\n escolha a opçao: \n");
    scanf("%d" , &opçao);
    
    switch(opçao){
        case 1:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           printf ("\n digite um numero \n");
           scanf("%d", &b);
           int result1=soma(a,b);
           printf("\nResultado da Soma: \n %d ", result1);
           
           case 2:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           printf ("\n digite um numero \n");
           scanf("%d", &b);
           int result2=subtraçao(a,b);
           printf("\nResultado da Subtraçao: \n %d ", result2);
           
           case 3:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           printf ("\n digite um numero \n");
           scanf("%d", &b);
           int result3=multiplicaçao(a,b);
           printf("\nResultado da multiplicaçao: \n %d", result3);
           
           case 4:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           printf ("\n digite um numero \n");
           scanf("%d", &b);
           float result4=divisao (a,b);
           printf("\nResultado da divisao: \n %f", result4);
           
           case 5:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           int result5=fatorial (a);
           printf("\nResultado do fatorial: \n %d", result5);
           
           case 6:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           float result6=cr (a);
           printf("\nResultado do cosseno em radiano: \n %f", result6);
           
           case 7:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           double result7=cg (a);
           printf("\nResultado do cosseno em graus: \n %f", result7);
           
           case 8:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           int result8=sd (a);
           printf("\nResultado da soma dos digitos: \n %d", result8);
           
            case 9:
           printf ("\n digite um numero \n");
           scanf("%d", &a);
           double result9=rq (a);
           printf("\nResultado da Raiz Quadrada: \n %f", result9);
           
    }



    return 0;
}
