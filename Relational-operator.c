#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	while (scanf("%d%*c%d", &a, &b) != EOF)/*     % *Ϊ��ֵ���Է��ţ��������Ƕ�ȡ��Ͷ�����%* cΪ��������ַ�
	EOF����End Of File����ͷ�ļ�stdio.h���棬������룡=EOF��Ϊ�˷�ֹ���������ϲ��
	whileѭ��������Ϊ������{}��Ϊѭ���Ķ���*/
	{
		if (a > b)//��ʾa����b
			printf("%d>%d\n", a, b);
		if (a >= b)//��ʾa���ڵ���b
			printf("%d>=%d\n", a, b);
		if (a < b)//��ʾaС��b
			printf("%d<%d\n", a, b);
		if (a <= b)//��ʾaС�ڵ���b
			printf("%d<=%d\n", a, b);
		if (a == b)//��ʾa����b��ֵ��ע����Ǹ�ֵ�ǵ���=���ж����������=����==
			printf("%d=%d\n", a, b);
		if (a != b)//��ʾa������b
			printf("%d!=%d", a, b);
	}//�������Է����Ǵ�������˳���������Ϊc����Ҳ��˳�򣬴�����������ִ�У�
	return 0;
}