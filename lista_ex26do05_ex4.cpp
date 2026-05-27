#include<stdio.h>
int main ()
{
 int V[11], i, N;
 
 for(i=1;i<=10;i++)
 {
 	printf("digite 10 numeros para o vetor:\n");
 	scanf("%i", &V[i]);
 }
 printf("digite um numero N:\n");
 scanf("%i", &N);
 for(i=1;i<=10;i++)
 {
 	if(N==V[i])
 	{
 		printf("N esta no vetor na posicao: %i\n", i);
	 }
	 else
	 {
	 	printf("N nao esta no vetor\n");
	 }
 }
}
