#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int decide = 1;
	printf("本程序可以1判断一个正数是奇数还是偶数2判断您是否成年");
	scanf("%d", &decide);
	if (decide == 1)
	{
		printf("本程序可以判断正数是奇数还是偶数，请输入一个整数");
		int number = 0;
		scanf("%d", &number);
		if (number % 2 == 1)//if（表达式），表示条件，（false为0，ture是非0）后面不加；不然无后续操作（if（）后到下一个分号前是结果，如果if（）后直接分号，视作结果为无）
			printf("%d是奇数", number);
		else//else函数和if相对，if不满足则执行else（else 是与离他最近的同级别if语句对应的，不论是否对齐，在if后面的{}内的if比它级别低）
			printf("%d是偶数", number);
	}
	if (decide == 2)
	{
		printf("本程序可以判断您是否成年，请输入您的年龄");
		int age = 0;
		scanf("%d", &age);
		if (age >= 18)
			printf("您已成年");
		else
			printf("您未成年");
	}

	if (decide >= 3)
	{
		printf("您输入的数字本程序无对应的功能");
	}//默认情况下if和else后面都只能跟单条语句，如果跟多条可以用{}

	return 0;
}