#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将要关机，如果输入我是猪就取消关机");
	scanf("%s", &input);
	if (0==strcmp(input , "我是猪"))//两个字符串不能用==比较大小，要用strcmp-比较字符串大小的字符串,相等返回0(要包含头文件string.h)
		system("shutdown -a");
	else
		goto again;
	return 0;
	/*again后面的可以用while（1）循环替代
	* while（1）//while（1）死循环，但是因为后面有break，停止循环
	printf("请注意，你的电脑将要关机，如果输入我是猪就取消关机");
	scanf("%s", &input);
	if (0==strcmp(input , "我是猪"))//两个字符串不能用==比较大小，要用strcmp-比较字符串大小的字符串,相等返回0(要包含头文件string.h)
		{
		system("shutdown -a");
		break;
		}
	return 0;
	*/
}
