#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(viod)
{
	int x = 0;
	int y = 0;
	for(x=1;x<=9;x++)
	{
		if (x = y)
			printf("\n");//断行
		for (y = 1; y <= x; y++)
			printf("x*y=%d ", x * y);//嵌套循环，在外面的循环中内部还有进行循环
	}
	
	return 0;
}