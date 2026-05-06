#include<stdio.h>
int main()
{
 int N,P=0; //numeros e pares
 for (N=1;N<=30;N++)
 {
 	if(N%2==0)
 	{
 	  P++;	
	 }
 }
 printf("quantidade de pares = %d", P);	
}
