#include<stdio.h>
int main()
{
	int num;
	int mask=0x1;
	printf("enter the number\n");
	scanf("%d",&num);

	if((num&mask)==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
