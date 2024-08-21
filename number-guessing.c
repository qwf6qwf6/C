#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>//使用time时要用
#include<stdlib.h>//使用rand和system的库函数要用
void menu()//定义函数，注意要放在调用的前面（调用前定义才能被调用），不然会显示重复定义
{

	printf("*******************\n");
	printf("*****  1.play   ***\n");
	printf("*****  0.excit  ***\n");
	printf("*******************\n");
	printf("请选择：");

}
void game()
{
	//time可以获得一个时间戳，指的是到1970年1月1日0时0分0秒的时间的差值（单位换算成秒），类型为time_t(为32位或者64位的整形)
	srand((unsigned int)time(NULL));//srand（）是初始化rand的函数,()内为rand的种子，为unsigned int类型的变量
	//time的参数的指针型的，NULL表示空指针,本质为0
	int i = 0;
	int q = rand() % 100;//rand库函数没参数，会（伪）随机生成一个0到RAND_MAX之间的数，RAND_MAX的大小是以来编译器实现的，大部分为32767
	//rand函数是对一个"种子"的基准值进行运算生产的随机数，rand生成随机数默认的种子是1
	//因为rand的上限太大了，用%100后取得的数就是0-99的了
	//生成a到b的随机数的方法：a+rand（）%（b-a+1）
	int guess = 0;
	int num = 5;
	while (num)
	{

		printf("请猜数字\n您还有%d次机会", num);
		scanf("%d", &guess);
		if (guess < q)
			printf("猜小了\n", num);
		else if (guess > q)
			printf("猜大了\n", num);
		else
		{
			printf("猜对了\n");
			break;
		}
		num--;
	}
	if (num == 0)
	{
		printf("机会使用完了，你失败了,数字是%d\n", q);
		system(Sleep(3600));//Sleep（）使程序等待（）内的毫秒数，1000ms=1s
		system("cls");//cls清屏
	}
}
int main()
{
	int w = 1;
	do
	{
		menu();//调用函数
		scanf("%d", &w);
		switch (w)
		{
		case 1: printf("猜数字\n");	game();  break;
		case 0: printf("退出\n"); break;
		default:printf("选择错误，重新选择\n"); break;
		}
	}
	while (w);

	return 0;
}