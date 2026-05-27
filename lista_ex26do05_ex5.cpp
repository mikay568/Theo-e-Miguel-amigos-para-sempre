#include<stdio.h>
int main ()
{
 int V[10], i, P,QI, MV;
 float MI, SI;
 MV=0; P=0;
 SI=0; QI=0; MI=0;
 
 for(i=1;i<=10;i++)
 {
 	printf("digite 10 valores para o vetor:\n");
 	scanf("%i", &V[i]);
 }
 for(i=1;i<=10;i++)
 {
   if(V[i]%2==0)
   {
   	P++;
   }
   if(V[i]%2==1)
   {
   	QI++;
   	SI = SI + V[i];
   }
   if(V[i]>MV)
   {
   	MV = V[i];
   }
 }
 MI = SI / QI;
 printf("quantidade de pares: %i\n", P);
 printf("media dos impares: %.2f\n", MI);
 printf("maior valor: %i\n", MV);
}
