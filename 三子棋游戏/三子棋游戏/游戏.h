#include <stdio.h>
#define row 3
#define col 3
void initboard(char boundary[][col],int,int);
void displaychecker(char boundary[row][col],int ROW,int COL);
void play(char boundary[][col],int ,int );
char is_win(char boundary[][col],int ,int );