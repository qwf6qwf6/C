#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char begin[] = "###########################";
	char input[] = { 'w','e','l','c','o','m','e','!','!','!','\0'};//�ַ���������ֳ�ʼ��������ֱ��""���������{}�ڵ����������루Ҫ��''��
	int i = 0;
	size_t end1 = strlen(begin)-1;
	size_t end2 = strlen(input) - 1;//��size_t�Ͳ��ᱨ�����ˣ���int��
	int zhongjian = 0;
	zhongjian = end1 / 2;
	if (end2 % 2 == 1)
	{

		for (i = 0; i < end2 / 2 + 1; i++)
		{
			begin[zhongjian - end2 / 2 + i] = input[i];
			begin[zhongjian + end2 / 2 + 1 - i] = input[end2 - i];
			printf("%s\n", begin);
			Sleep(1000);//sleep��������ֱ���ã�Ҫ��ͷ�ļ�windows.h�����ǲ�����ʱ�����Ҳ�����У����ǻᾯ��
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
	}//������������С��ͬ��������i<=end2-i������	
	//���ַ������֣�Ҫ�󣬱�������������߽��򣩣�
	int fanwei[] = { 1,2,3,4,5,6,7,8,9,10 };
	int yaoqiude = 7;
	scanf("%d", &yaoqiude);
	int left = 0;
	int right = sizeof(fanwei) / sizeof(fanwei[0])-1;
	
	while (left <= right)
	{
		int zhongjiande = right + (left - right) / 2;//Ҫ����ѭ�����Ȼ����ѭ������a+b��/2����˼·��b+��a-b��/2,����ab�ĸ����ĸ�ż���ͣ�a+b��/2һ�������ҿ��Ա���a+b������Χ���������������a/2+b/2�������������Ϊ���������ܴ�
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
			printf("�ҵ��ˣ���%d", zhongjiande);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���");
	return 0;

}