#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>//ʹ��timeʱҪ��
#include<stdlib.h>//ʹ��rand��system�Ŀ⺯��Ҫ��
void menu()//���庯����ע��Ҫ���ڵ��õ�ǰ�棨����ǰ������ܱ����ã�����Ȼ����ʾ�ظ�����
{

	printf("*******************\n");
	printf("*****  1.play   ***\n");
	printf("*****  0.excit  ***\n");
	printf("*******************\n");
	printf("��ѡ��");

}
void game()
{
	//time���Ի��һ��ʱ�����ָ���ǵ�1970��1��1��0ʱ0��0���ʱ��Ĳ�ֵ����λ������룩������Ϊtime_t(Ϊ32λ����64λ������)
	srand((unsigned int)time(NULL));//srand�����ǳ�ʼ��rand�ĺ���,()��Ϊrand�����ӣ�Ϊunsigned int���͵ı���
	//time�Ĳ�����ָ���͵ģ�NULL��ʾ��ָ��,����Ϊ0
	int i = 0;
	int q = rand() % 100;//rand�⺯��û�������ᣨα���������һ��0��RAND_MAX֮�������RAND_MAX�Ĵ�С������������ʵ�ֵģ��󲿷�Ϊ32767
	//rand�����Ƕ�һ��"����"�Ļ�׼ֵ���������������������rand���������Ĭ�ϵ�������1
	//��Ϊrand������̫���ˣ���%100��ȡ�õ�������0-99����
	//����a��b��������ķ�����a+rand����%��b-a+1��
	int guess = 0;
	int num = 5;
	while (num)
	{

		printf("�������\n������%d�λ���", num);
		scanf("%d", &guess);
		if (guess < q)
			printf("��С��\n", num);
		else if (guess > q)
			printf("�´���\n", num);
		else
		{
			printf("�¶���\n");
			break;
		}
		num--;
	}
	if (num == 0)
	{
		printf("����ʹ�����ˣ���ʧ����,������%d\n", q);
		system(Sleep(3600));//Sleep����ʹ����ȴ������ڵĺ�������1000ms=1s
		system("cls");//cls����
	}
}
int main()
{
	int w = 1;
	do
	{
		menu();//���ú���
		scanf("%d", &w);
		switch (w)
		{
		case 1: printf("������\n");	game();  break;
		case 0: printf("�˳�\n"); break;
		default:printf("ѡ���������ѡ��\n"); break;
		}
	}
	while (w);

	return 0;
}