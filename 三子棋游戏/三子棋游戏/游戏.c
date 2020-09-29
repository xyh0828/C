#define _CRT_SECURE_NO_WARNINGS 1

#include"游戏.h"

void setting()
{
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
	printf("&&&&&& 1.玩游戏  0.退出 &&&&&&&&&&\n");
	printf("&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n");
}
void game()
{
    int n;
	setting();
	printf("请输入：");
	while(1)
	{
		scanf("%d",&n);
		if(n==1)
			{
				printf("三子棋\n");
		     break;
		}

		else if(n==0)
		{
			printf("退出游戏\n");
		break;
		}
		else
			printf("输入错误，请重新输入\n");
			
		
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