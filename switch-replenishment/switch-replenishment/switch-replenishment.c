#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	printf("��������������");
	scanf("%d",& a);
	switch (a)//���ڱ���Ϊ���α��ʽ��
	{
	case 1://case�����Ϊ���γ������ʽ
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������"); break;//��������case���涼Ҫ��break������break��ִ����һ��case�����
	case 6:
	case 7:
		printf("��Ϣ��"); break;
	default://����case����������ʱ��ִ��default������Ҳû��
		printf("����"); break;
	}
	return 0;
}