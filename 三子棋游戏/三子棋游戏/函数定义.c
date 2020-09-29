
#include"сно╥.h"
#include<time.h>
#include<stdlib.h>
void initboard(char boundary[row][col],int n,int m)
{
	int i,j;
		
	    for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			boundary[i][j]= ' ';
	

	
}

void displaychecker(char boundary[row][col],int ROW,int COL)
{
 
	int i,j;  
	
	for(i=0;i<ROW;i++)
	{
			
				for(j=0;j<COL;j++)
				{
				printf(" %c ",boundary[i][j]);
				if(j<COL-1)
					printf("|");}

		printf("\n");
		if(i<ROW-1)
		{
			for(j=0;j<COL;j++)
		{	
			printf("---");
			if(j<COL-1)
					printf("|");

		}
		}
		
		printf("\n");	
				
}
		
}

void play(char boundary[row][col],int q,int w)
{
	int z,x;
	int h,j;
	char k,l;
		printf("player start>\n");
			srand((unsigned)time(NULL));
	while(1)
	{	
		printf("input number:");
		scanf("%d%d",&z,&x);
		if(z>0 && z<=q && 0<x && x<=w)
		{
			if(boundary[z-1][x-1]==' ')
			{
				boundary[z-1][x-1]='*';
			
			}
			else
				{
					printf("Coordinates are occupied\n");
			        continue;
			}

		}
		else
		{
			printf("Error! input again:\n");
			  continue;
			
			
		}
		displaychecker(boundary,row,col);
	    k=is_win(boundary,row,col);
		if(k=='*')
			{	printf("player win\n");
		break;
			
		}
		if(k=='c')
		{
			printf("draw\n");
		break;
			
		}
	while(1)
	{
		h=rand()%3+1;
		j=rand()%3+1;

		if(boundary[h-1][j-1]==' ')
		{
			boundary[h-1][j-1]='#';
			
			 break;
		}
	}
displaychecker(boundary,row,col);
	  k=is_win(boundary,row,col);
	  if(k=='#')
			{	printf("computer win\n");
		break;
			
		}
		if(k=='c')
		{
			printf("draw\n");
		break;
			
		}
		 
	}
}

int isfull(char boundary[][col],int a ,int s)
{
	int i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<s;j++)
		{
			if(boundary[i][j]==' ')
				return 0;
		}
	}
	return 1;
}
char is_win(char boundary[][col],int e ,int r )
{
   int i,j;
  for(i=0;i<e;i++)
  
  {
	if(boundary[i][0]==boundary[i][1]&&boundary[i][1]==boundary[i][2]&&boundary[i][2]!=' ')
		{
			return boundary[i][2];
		}
  }
  for(j=0;j<r;j++)
	{
		if(boundary[0][j]==boundary[1][j]&&boundary[1][j]==boundary[2][j]&&boundary[2][j]!=' ')
		{
		return boundary[2][j];
		}
  }
   if(boundary[0][0]==boundary[1][1]&&boundary[1][1]==boundary[2][2]&&boundary[2][2]!=' ')
	   return boundary[1][1];
   if(boundary[0][2]==boundary[1][1]&&boundary[1][1]==boundary[2][0]&&boundary[2][0]!=' ')
	   return boundary[1][1];
   if(1== isfull( boundary, row , col))
	   return 'c';
}