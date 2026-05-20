#include<stdio.h>
int main()
{
 int lin, col;
 float matriz[2][7], dia_quente, temp_quente, media;
 //CARREGAR A MATRIZ COM O DIA DA SEMANA E A TEMPERATURA
 for(col=0;col<=6;col++)
   for(lin=0;lin<=1;lin++)
    {
     if (lin==0)
	 {
	 	printf("digite o dia da semana (1 a 7): ");
	 }
	 else
	 {
	 	printf("digite a temperatura desse dia: ");
	 }
	 scanf("%f", &matriz[lin][col]);	
	}
//INICIALIZANDO AS VARIAVEIS DE DIA E TEMPERATURA
	dia_quente = matriz[0][0];
	temp_quente = matriz[1][0];
	
	for(col=0;col<=6;col++)
	  {
	    media = media + matriz[1][col];
	    if (matriz[1][col] > temp_quente)
	    {
	    	temp_quente = matriz[1][col];
	    	dia_quente = matriz[0][col];
		}
     }
//EXIBINDO RESULTADOS
    printf("\ntemperatura media = %f", media/7);
    printf("\ndia mais quente, com temperatura de %.2f ", temp_quente);
    if (dia_quente == 1)
    {
    	printf("foi domingo");
	}
	  if (dia_quente == 2)
    {
    	printf("foi segunda");
	}
	  if (dia_quente == 3)
    {
    	printf("foi terca");
	}
	  if (dia_quente == 4)
    {
    	printf("foi quarta");
	}
	  if (dia_quente == 5)
    {
    	printf("foi quinta");
	}
	  if (dia_quente == 6)
    {
    	printf("foi sexta");
	}
	  if (dia_quente == 7)
    {
    	printf("foi sabado");
	}
}
