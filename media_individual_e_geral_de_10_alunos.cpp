#include<stdio.h>
int main()
{
 int A, AP, RE; //alunos, aprovados e reprovados
 float N1, N2, MI, MG; //nota 1 e 2,media individual e geral
 A = 0;
 AP = 0;
 RE = 0;
 MG = 0;
 do {
 	A++;
 	printf("notas do aluno %d\n", A);
 	printf("digite as notas 1 e 2:\n");
 	scanf("%f %f", &N1, &N2);
 	MI = (N1 + N2) /2;
 	printf("media individual do aluno %d: %.2f\n", A, MI);
 	if(MI<5)
 	{
 	 printf("reprovado\n");
	  RE++;	
	 }
	 else
	 {
	 	printf("aprovado\n");
	 	AP++;
	 }
 	MG = MG + MI;
 } while (A<10);
	MG = MG/10;
	printf("media geral: %.2f\n", MG);
	printf("quantidade de alunos aprovados: %d\n", AP);
	printf("quantidade de alunos reprovados: %d\n", RE);
}
