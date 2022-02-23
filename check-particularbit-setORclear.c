// check the particular bit is clear or set

#include<stdio.h>
int main()
{
	int num;
	int pos;
	int result;
	printf("\n enter the number \n");
	scanf("\n %d",&num);
	printf("\n enter the position \n");
	scanf("\n %d",&pos);

	result=num&(1<<pos);
	if(result==0)
	{
		printf("CLEAR\n");
	}
	else
	{
		printf("SET\n");
	}

	return 0;
}
