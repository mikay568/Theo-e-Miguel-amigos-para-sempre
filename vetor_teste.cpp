#include<stdio.h>
int main()
{
 int vetor[5]; //variavel global
 for(int i = 0;i<=4;i++) //i variavel local
 { //i vale aqui
 	printf("digite um valor:");
 	scanf("%i", &vetor[i]);
 } // i deixa de valer depois daqui
 for(int i = 0; i<=4; i++)
 printf("\nindice %i do vetor: %i", i, vetor[i]);
}
