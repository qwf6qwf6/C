#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int q, w;
	char f;
	while (scanf("%d%c%d", &q, &f, &w) != EOF)
	{
		switch (f)/*swich(ѡ��ı���) { case���:ִ�����; break; }��ѡ��ı�����case����Ľ���Աȣ���Ⱦ�ִ������case��ִ�����
			break����ֹѭ������ֹ����ѭ��ִ��*/
		{
		    case  '+': printf("%d+%d=%d\n",q,w, q + w); break;
		    case  '-': printf("%d-%d=%d\n",q,w, q - w); break;
		    case  '*': printf("%d*%d=%d\n",q,w, q * w); break;
		    case  '/': printf("%d/%d=%d\n",q,w, q / w); break;
		    case  '%': printf("%d/%d=%d\n",q,w, q % w); break;
			default:printf("�޷�����\n"); break;//���м�Ҫ��break��{}�������Բ��üӣ���Ϊ�Ѿ��ǳ����ĩβ��
		}


	}
	
	
	return 0;
}