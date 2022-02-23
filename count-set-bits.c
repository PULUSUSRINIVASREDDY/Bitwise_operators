// count the all set bits

#include<stdio.h>
int main()
{
	int num;
	int count=0;
	printf("\nenter the number \n");

	scanf("\n %d",&num);

	while(num!=0)
	{

		if(num&1==1)
		{
	
		   count++;
	           num=num>1;
		}
	}
	printf("\n%d\n",count);
}
		 

