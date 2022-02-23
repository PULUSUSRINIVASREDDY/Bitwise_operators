#include<stdio.h>
int main()
{
	unsigned int num=140;
	num=num&num-1;
	printf("%d",num);

	return 0;
}
