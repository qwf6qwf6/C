#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ�Ҫ�ػ�����������������ȡ���ػ�");
	scanf("%s", &input);
	if (0==strcmp(input , "������"))//�����ַ���������==�Ƚϴ�С��Ҫ��strcmp-�Ƚ��ַ�����С���ַ���,��ȷ���0(Ҫ����ͷ�ļ�string.h)
		system("shutdown -a");
	else
		goto again;
	return 0;
	/*again����Ŀ�����while��1��ѭ�����
	* while��1��//while��1����ѭ����������Ϊ������break��ֹͣѭ��
	printf("��ע�⣬��ĵ��Խ�Ҫ�ػ�����������������ȡ���ػ�");
	scanf("%s", &input);
	if (0==strcmp(input , "������"))//�����ַ���������==�Ƚϴ�С��Ҫ��strcmp-�Ƚ��ַ�����С���ַ���,��ȷ���0(Ҫ����ͷ�ļ�string.h)
		{
		system("shutdown -a");
		break;
		}
	return 0;
	*/
}
