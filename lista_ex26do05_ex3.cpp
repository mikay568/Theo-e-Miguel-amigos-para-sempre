#include<stdio.h>
#include<cstdio>
int main()
{
 char T1[50], T2[50];
 int GT1, GT2, GP;	
 
 printf("digite o nome do time 1:\n");
 gets(T1);
 printf("digite o numero de gols do time 1:\n");
 scanf("%i", &GT1);
 fflush (stdin);
 printf("digite o nome do time 2:\n");
 gets(T2);
 printf("digite o numero de gols do time 2:\n");
 scanf("%i", &GT2);
 if(GT1>GT2)
 {
  printf("%s ganhou\n", T1);
 }
 if(GT2>GT1)
 {
  printf("%s ganhou\n", T2);
 }
 if(GT1==GT2 || GT2==GT1)
 {
 	printf("empate\n");
 }
 GP = GT1 + GT2;
 printf("total de gols: %i", GP);
}
