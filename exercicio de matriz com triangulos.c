/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() 

/* ler uma matriz de numeros pre definidos onde cada linha tem tres variaveis e veria
se esses numeros da linha podem ser um triangulo e retornar o resultado */

{
    int a, b, c;                        //declarando as variaaveis//

    a=3; b=5; c=8;
   
    if (a+b>c && a+c>b && b+c>a) {     //dando valor as variaveis e depois usando as formula dos triangulos//
    
        if (a==b && b==c) {
            printf("%d %d %d formam um triângulo equilátero\n", a, b, c);
        } else if (a==b ||  a==c || b==c) {
            printf("%d %d %d formam um triângulo isósceles\n", a, b, c);
        } else {
            printf("%d %d %d formam um triângulo escaleno\n", a, b, c);
        }
    } else {
        printf("%d %d %d não formam um triângulo\n", a, b, c);
    }
    
    a=4; b=3; c=5;
   
    if (a+b>c && a+c> b && b+c>a) {    
        if (a==b && b==c) {
            printf("%d %d %d formam um triângulo equilátero\n", a, b, c);
        } else if (a==b || a==c || b==c) {
            printf("%d %d %d formam um triângulo isósceles\n", a, b, c);
        } else {
            printf("%d %d %d formam um triângulo escaleno\n", a, b, c);
        }
    } else {
        printf("%d %d %d não formam um triângulo\n", a, b, c);
    }
    
    a=7; b=8; c=9;
   
    if (a+b>c && a+c>b && b+c>a) {    
        if (a==b && b==c) {
            printf("%d %d %d formam um triângulo equilátero\n", a, b, c);
        } else if (a==b || a==c || b==c) {
            printf("%d %d %d formam um triângulo isósceles\n", a, b, c);
        } else {
            printf("%d %d %d formam um triângulo escaleno\n", a, b, c);
        }
    } else {
        printf("%d %d %d não formam um triângulo\n", a, b, c);
    } 
    
    a=4; b=2; c=15;
   
    if (a+b>c && a+c>b && b+c>a) {    
        if (a==b && b==c) {
            printf("%d %d %d formam um triângulo equilátero\n", a, b, c);
        } else if (a==b || a==c ||  b==c) {
            printf("%d %d %d formam um triângulo isósceles\n", a, b, c);
        } else {
            printf("%d %d %d formam um triângulo escaleno\n", a, b, c);
        }
    } else {
        printf("%d %d %d não formam um triângulo\n", a, b, c);
    }
    
   return 0;
}

