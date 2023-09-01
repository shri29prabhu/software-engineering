#include<stdio.h>
#include<conio.h>
int main()
{
	int E,N,CC,P;
	printf("enter the no.of edges:");
	scanf("%d",&E);
	printf("\nenter the no.of nodes:");
	scanf("%d",&N);
	printf("\nenter the no. of predicate nodes:");
	scanf("%d",&P);
	CC=E-N+(2*P);
	printf("the value of cyclomatic complexity:%d",CC);
}
