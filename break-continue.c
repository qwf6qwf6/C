#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	while (i<=10)
	{
		i++;
		if (i == 5)
			break;//break�����ѭ��
		if (i == 3)
			continue;//continue����������ѭ����仰֮�����䣬����whileѭ�����i++��continue����ͻ���ѭ������Ϊÿ��i++���������ˣ�����iһֱΪcontinue���������³���һֱѭ��
		printf("%d", i);
	

	}
	printf("\n");
	for (i = 1; i <= 10; i++)//�﷨��֧��for�ĳ�ʼ�����жϣ�����������ʡ�ԣ������������׳�������жϲ���ʡ���˾�����ѭ������Ϊ�ͱ�ɺ�Ϊ����
	{
			if (i == 5)
				break;
		if (i == 3)
			continue;
		printf("%d", i);//���ﲻ����ѭ������Ϊfor��i++����ǰ�棬Ҳ������continueǰ��

	}
	/*������ʵ 
	int i=0
	while(i<=10)
	{i++
	.......
	}
	�ȼ���
	for(i=0,i<=10,i++)
	{
	......
	}
	*/
	return 0;
}