// toggle the nth bit of a given number //

#include<stdio.h>
int main()
{
	int num;
	int pos;

	printf("\n enter the num number \n");
	scanf("\n %d",&num);
	printf("\n enter the position \n");
	scanf("\n %d",&pos);

	num=num^(1<pos);

	printf("\n %d \n",num);
}
