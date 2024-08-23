#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char begin[] = "###########################";
	char input[] = { 'w','e','l','c','o','m','e','!','!','!','\0'};//字符数组的两种初始化方法，直接""内输入或者{}内单个单个输入（要加''）
	int i = 0;
	size_t end1 = strlen(begin)-1;
	size_t end2 = strlen(input) - 1;//用size_t就不会报警告了，用int会
	int zhongjian = 0;
	zhongjian = end1 / 2;
	if (end2 % 2 == 1)
	{

		for (i = 0; i < end2 / 2 + 1; i++)
		{
			begin[zhongjian - end2 / 2 + i] = input[i];
			begin[zhongjian + end2 / 2 + 1 - i] = input[end2 - i];
			printf("%s\n", begin);
			Sleep(1000);//sleep函数可以直接用，要带头文件windows.h，但是不代的时候好像也能运行，但是会警告
			system("cls");
		}
		printf("%s\n", begin);
	}
	else
	{
		for (i = 0; i < end2 / 2; i++)
		{
			begin[zhongjian - end2 / 2 + i] = input[i];
			begin[zhongjian + end2 / 2 - i] = input[end2 - i];
			printf("%s\n", begin);
		}
		begin[zhongjian] = input[(end2 + 1) / 2];
		printf("%s\n", begin);
		Sleep(1000);
		system("cls");
	}//如果两个数组大小相同，可以用i<=end2-i做条件	
	//二分法求数字：要求，必须有序（升序或者降序），
	int fanwei[] = { 1,2,3,4,5,6,7,8,9,10 };
	int yaoqiude = 7;
	scanf("%d", &yaoqiude);
	int left = 0;
	int right = sizeof(fanwei) / sizeof(fanwei[0])-1;
	
	while (left <= right)
	{
		int zhongjiande = right + (left - right) / 2;//要放在循环里，不然会死循环，求（a+b）/2的新思路，b+（a-b）/2,不论ab哪个奇哪个偶都和（a+b）/2一样，并且可以避免a+b超出范围的情况，（不能用a/2+b/2这样如果两个都为奇数会误差很大）
		if (fanwei[zhongjiande] < yaoqiude)
		{
			left = zhongjiande + 1;
		}
		else if (fanwei[zhongjiande] > yaoqiude)
		{
			right = zhongjiande - 1;
		}
		else
		{
			printf("找到了，是%d", zhongjiande);
			break;
		}
	}
	if (left > right)
		printf("找不到");
	return 0;

}