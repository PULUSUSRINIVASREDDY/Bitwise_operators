#include<stdio.h>
int main()
{
	int num;
	int pos;

	printf("enter the num number\n");
	scanf("\n%d",&num);
	printf("enter the position\n");
	scanf("\n%d",&pos);

	printf("=printf%d\n",num);
	num=(num|(0x1<<pos));/* ///  0001 and pos->1  ->output ->po starting 0
//	->0001
//	->0010->pos->1
//	->0011->output->3 */

	printf("%x\n",num);
}
