#define _CRT_SECURE_NO_WARNINGS 1

#include"��Ϸ.h"

void setting()
{
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("&&&&&& 1.����Ϸ  0.�˳� &&&&&&&&&&\n");
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
}
void game()
{
    int n;
	setting();
	printf("�����룺");
	while(1)
	{
		scanf("%d",&n);
		if(n==1)
			{
				printf("������\n");
		     break;
		}

		else if(n==0)
		{
			printf("�˳���Ϸ\n");
		break;
		}
		else
			printf("�����������������\n");
			
		
	}
}
int main(void)
{

	char boundary[row][col];
	while(1)
	{
	game();
	initboard(boundary,row,col);
	displaychecker(boundary,row,col);
	play(boundary,row,col);
	}
	
	

return 0;
	
}