#include<stdio.h>
#include<stdbool.h>//ʹ��bool�����ش�
int main()
{
	long long a = 10;
	int b = 20;
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));//intΪ�����ͣ�int��int,short int,long int,long long int�����ɼ���signed��unsigned��ֱ��дĬ�ϴ�signed��signedΪ�з��ţ��������ɣ����Ϊ%d��unsignedΪ�޷��ţ��Ǹ����������Ϊ%u��C���Թ涨long int����>=int��
	printf("%zd\n", sizeof(char));//charΪ�ַ��ͣ��ɷ�Ϊ���޷��ţ�signed��unsigned
	printf("%zd\n", sizeof(float));//floatΪ�����ȸ����ͣ�ֵ��ע�����ֱ��дС��Ĭ��Ϊdouble�ͣ���β��fΪfloat�ͣ���3.1Ϊdouble�ͣ�3.1fΪfloat��
	printf("%zd\n", sizeof(double));//doubleΪ˫���ȸ�����
	printf("%zd\n", sizeof(long double));//long doubleΪ��˫���ȸ�����
	printf("%zd\n", sizeof(bool));//bool�ж���٣�tureΪ1��falseΪ0������C������0Ϊ�٣���0Ϊ�棩���ǵñ����#include<stdbool.h>
	printf("%zd\n", sizeof(int));//sizeof�ؼ��ֿ��Լ������͡��������߱��ʽ�ĳ��ȣ����ɼ����Լ�����sizeof������λΪ�ֽڣ�Byte����1Byte=8bit��������һ����λ���ȣ���1KB=1024Byte
	printf("%zd\n", sizeof(a));//sizeof�ؼ��ַ��ص�Ϊsize_t���͵ģ�����%zd
	printf("%zd\n", sizeof a);//�������Բ��ã��������ͺͱ��ʽ���루��
	printf("%zd\n", sizeof(a = b + 1 + 1));
	printf("a=%zd\n", a);//sizeof�еı��ʽ������ʵ���㣬���������ƶϣ�1��1��b��Ϊ����Ϊ4�ֽڵ�int���ͣ�a=b+1+1��˼�ǽ�b+1+1����a�У���Ϊa�ǳ���Ϊ8��long���ͣ����Լ���������ǿ�a�ĳ���
	return 0;
}