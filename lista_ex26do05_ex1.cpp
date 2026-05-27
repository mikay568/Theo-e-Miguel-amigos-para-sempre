#include<stdio.h>
int main ()
{
 int B, N, V; 
 float PB, PN, T, PV;
 
 printf("escreva o numero de votos em branco\n");
 scanf("%i", &B);
  printf("escreva o numero de votos nulos\n");
 scanf("%i", &N);
  printf("escreva o numero de votos validos\n");
 scanf("%i", &V);
 T = B + N + V;
 PB = (B/T)*100;
 PN = (N/T)*100;
 PV = (V/T)*100;
 printf("total de votos: %.0f\n", T);
 printf("porcentagem de votos em branco: %.2f%%\n", PB);
 printf("porcentagem de votos nulo: %.2f%%\n", PN);
 printf("porcentagem de votos validos: %.2f%%\n", PV);
}

