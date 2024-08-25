#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
int i = 0;
int j = 0;
void Initboard(char arr[hang][lie], int row,int col, char a)
{

	for (i = 1; i < row-1; i++)
	{
		for (j = 1; j  < col-1; j++)
		{
			arr[i][j] = a;
		}

	}
}
void daying(char arr[hang][lie], int row, int col)
{
	printf("-------É¨À×--------\n");
	for (j = 0; j <= Lie; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= Hang; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= Lie; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	
}