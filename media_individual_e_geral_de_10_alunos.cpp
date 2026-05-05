#include<stdio.h>
int main()
{
 int N1, N2, A; //nota 1, 2 e alunos
 float MI, MG; //media individual e geral
 A = 0;
 MG = 0;
 do {
 	A++;
 	printf("digite as notas 1 e 2\n");
 	scanf("%d %d", &N1, &N2);
 	MI = ((float)N1 + N2) /2;
 	printf("media individual do aluno %d: %.2f\n", A, MI);
 	MG = MG + MI;
 } while (A<10);
	MG = MG/10;
	printf("media geral: %.2f\n", MG);
}
