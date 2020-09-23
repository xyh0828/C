#include<stdio.h>

#include<stdlib.h>

#include<time.h>
int main (void)

{
	int number[23],x,z;
	int i,j;
	srand((unsigned)time(NULL));
	for(z=0;z<23;z++)
	{
		
		for(j=0;;j++)
		{
			x=rand()%30+1;
	for(i=0;i<z;i++)
    { 
	if(number[i]==x)
		break;

	}
    if(	z==i)
	{
		number[z]=x;
		break;
	}
	
	}
	

	}
	for(z=0;z<23;z++)
			printf("%d\n",number[z]);
	return 0;
}

