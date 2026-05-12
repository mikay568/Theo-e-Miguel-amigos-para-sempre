#include<stdio.h>
int main()
{
	int vetorA[5], vetorB[5], vetorC[5], i;
	for (i=0;i<=4;i++)
	{printf("escreva o valor de A e B:\n");
	 scanf("%i %i", &vetorA[i], &vetorB[i]);
	}
   for (i=0;i<=4;i++)
   {
   	vetorC[i] = vetorA[i] + vetorB[i];
   	printf("soma dos vetores A e B: %i\n", vetorC[i]);
   }
	
}
