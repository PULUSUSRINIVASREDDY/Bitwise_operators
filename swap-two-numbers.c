// swap two numbers using bitwise operators
#include<stdio.h>
int main()
{
	int x,y;
	{
		printf("enter the a and b value\n");

		scanf("\n%d %d ",&x,&y);

		x=x^y;
		y=x^y;
		x=x^y;

		printf("after swapping=%d %d\n",x,y);
	}
}

