#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("请输入整形数字");
	scanf("%d",& a);
	switch (a)//（内必须为整形表达式）
	{
	case 1://case后必须为整形常量表达式
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日"); break;//不是所有case后面都要加break，不加break就执行下一个case的语句
	case 6:
	case 7:
		printf("休息日"); break;
	default://所有case都不成立的时候执行default，不加也没事
		printf("错误"); break;
	}
	return 0;
}