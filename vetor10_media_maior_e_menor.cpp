#include<stdio.h>
int main()
{
	int i;
  float vetS[10], maior, menor, media;
  for (i=0;i<=9;i++)
  {
  	printf("digite os valores do vetor:\n");
  	scanf("%f", &vetS[i]);
  }
  maior = vetS[1];
  menor = vetS[1];
  for (i=0;i<=9;i++)
  {
  	  	media = media + vetS[i];
  	if (vetS[i] > maior)
  	{
  	 maior = vetS[i];	
	  }
	  if (vetS[i] < menor)
	  {
	  	menor = vetS[i];
	  }
  }
  media = media/10;
  printf("media:%.2f\nmaior:%.2f\nmenor:%.2f", media, maior, menor);
}
