#include<stdio.h>
int main ()
{
 int V[20], i, C[10];	
 
 for(i=1;i<=20;i++)
 {
	printf("digite um numero inteiro [%i]:\n", i);
	scanf("%i", &V[i]);
 }
 for (i=0;i<10;i++)
 {
  C[i]=0;	
 }
 for(i=1;i<=20;i++)
 {
 	C[V[i]]++;
 }
 for(i=0;i<10;i++)
 {
 	printf("%i apareceu %i vezes\n", i, C[i]);
 }
}
