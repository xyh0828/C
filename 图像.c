#include<stdio.h>
int main(void)
{
	int i,x;
	for(i=1;i<7;i++)
	{
		for(x=0;x<i;x++)
			printf("*");
		printf("\n");
	}
	return 0;
}