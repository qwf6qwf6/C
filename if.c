#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int decide = 1;
	printf("���������1�ж�һ����������������ż��2�ж����Ƿ����");
	scanf("%d", &decide);
	if (decide == 1)
	{
		printf("����������ж���������������ż����������һ������");
		int number = 0;
		scanf("%d", &number);
		if (number % 2 == 1)//if�����ʽ������ʾ��������falseΪ0��ture�Ƿ�0�����治�ӣ���Ȼ�޺���������if��������һ���ֺ�ǰ�ǽ�������if������ֱ�ӷֺţ��������Ϊ�ޣ�
			printf("%d������", number);
		else//else������if��ԣ�if��������ִ��else��else �������������ͬ����if����Ӧ�ģ������Ƿ���룬��if�����{}�ڵ�if��������ͣ�
			printf("%d��ż��", number);
	}
	if (decide == 2)
	{
		printf("����������ж����Ƿ���꣬��������������");
		int age = 0;
		scanf("%d", &age);
		if (age >= 18)
			printf("���ѳ���");
		else
			printf("��δ����");
	}

	if (decide >= 3)
	{
		printf("����������ֱ������޶�Ӧ�Ĺ���");
	}//Ĭ�������if��else���涼ֻ�ܸ�������䣬���������������{}

	return 0;
}