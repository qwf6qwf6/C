#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	while (i<=10)
	{
		i++;
		if (i == 5)
			break;//break会结束循环
		if (i == 3)
			continue;//continue会跳过本次循环这句话之后的语句，对于while循环如果i++在continue后面就会死循环，因为每次i++都被跳过了，所以i一直为continue的数，导致程序一直循环
		printf("%d", i);
	

	}
	printf("\n");
	for (i = 1; i <= 10; i++)//语法上支持for的初始化，判断，调整都可以省略，但是这样容易出错，如果判断部分省略了就是死循环，因为就变成恒为真了
	{
			if (i == 5)
				break;
		if (i == 3)
			continue;
		printf("%d", i);//这里不会死循环，因为for的i++在最前面，也就是在continue前面

	}
	/*所以其实 
	int i=0
	while(i<=10)
	{i++
	.......
	}
	等价于
	for(i=0,i<=10,i++)
	{
	......
	}
	*/
	return 0;
}