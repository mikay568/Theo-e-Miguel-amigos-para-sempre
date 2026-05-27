#include<stdio.h>
int main ()
{
 float SA, R, SF;
 
 printf("digite o salario atual:\n");
 scanf("%f", &SA);
 printf("digite o reajuste:\n");
 scanf("%f", &R);
 SF = (SA*(R/100))+SA;
 printf("Seu salario futuro sera:\n %.2f", SF);
	
}
