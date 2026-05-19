#include<stdio.h>
int main()
{
 int matriz[3][3], p, n;
 n=0; p=0;
 for(int i=0;i<=2;i++)
  for(int j=0;j<=2;j++)
  {
  	printf("digite numeros negativos ou positivos:\n");
  	scanf("%i", &matriz[i][j]);
  	if(matriz[i][j]>=0)
  	{
  		p = p + 1;
	  }
	  else
	  {
	  	n = n + 1;
	  }
  }
  printf("quantidade de numeros positivos:%i\nquantidade de numeros negativos:%i", p, n);	
}
