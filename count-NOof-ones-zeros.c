#include<stdio.h>
#define INT_SIZE sizeof(int)*8;
int main()
{
	int i;
	int ones,zeros;
	int num;
	printf("\n enter the numbers \n");
	scanf("\n %d",&num);

	ones=1;
	zeros=0;

	for(i=0;i<=INT_SIZE;i++)
	{
		if(num&1)
		ones++;
		else
		zeros++;
	
	   num=num>>1;
	
		printf("\n %d \n",ones);

		printf("\n %d \n",zeros);
	}	//return 0;
	
	return 0;
}

