#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("1\n");
	goto next;//��ת��ָ��λ�ã��ڶ��ѭ������ѭ�����ã����Ǿ������ã�����Ҵ�������˳��
	printf("2");
next:
	printf("������2");
	return 0;
}