#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define NDEBUG
#include<assert.h>
int my_strlen1(const char * s)//���������������һ��Ԫ�صĵ�ַ����arr=arr[0]
{
	int n = 0;
	while(*(s+n)!='\0')
	{
		n++;
	}
	return n;
}
int my_strlen2(const char* s)//����constʹ�ò���ͨ��s���޸ı�����Ԫ��
{
	char *begin = s;
	while (*begin)//�����Բ�м��='\0'����Ϊ\0����Ϊ0��ASCIIֵ��
	{
		begin++;
	}
	return begin-s;
}
int* test()
{
	int n = 100;
	return &n;
}
void exchange(int a, int b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}
void exchange1(int* p1, int* p2)
{
	int z = 0;
	z = *p1;
	*p1 = *p2;
	*p2 = z;
}
int main()
{
	//const
	const int num = 1;//const���εı��������˳����ԣ����ɱ��޸ģ�����c������count���ε��ǳ����������ʻ��Ǳ���������const���κ���������﷨�ϲ������޸��������������c++�б����εľ��ǳ���
	int* p = &num;
	*p = 20;//���ǿ���ͨ����ȡ����ŵĵ�ַ���ٽ��������޸������ַ�ڵ����ݣ�ͬʱ��Ϊ�����ı��ʾ���������һ������Ŀռ䣬����ռ�����ݱ��ı��ˣ���ô��Ҳ�ͱ��ı���
	int x = 1;
	const int* p1 = &x;//const int*p1��int const*pһ����������*��ߣ��������Ʋ��ܶ�p1���н����ã�����ָ����������ֵ�ǿ��Ըĵģ����Ըĳɴ��������ַ��
	int* p2 = p1;
	*p2 = 2;//������Ȼ����ͨ���½�������������
	int* const p3 = &num;//const��*�ұ�ʱ���Խ��н����ã����ǲ��ܸĳɴ��������ַ
	printf("%d\n", num);
	//ָ��-ָ�룬�õ�ָ���ָ����Ԫ�ظ������ߵ�ַ-�͵�ַΪ�������͵�ַ-�ߵ�ַΪ��������ǰ������������ָ��ָ��ͬһ��ռ䣩
	int abc[10] = {1,2,3,4,5,6,7,8,9,10};
	int* q = &abc[0];
	int* w = &abc[9];
	printf("%p\n", q );
	printf("%p\n", w);
	printf("%d\n", q - w);
	//��дstrlen����
	char qwf[] = "qwf";
	printf("%d\n", my_strlen1(qwf));
	printf("%d\n", my_strlen2(qwf));
	//ָ���ϵ����
	int xyz[] = {1,2,3,4,5,6,7,8,9,10};
	int* pa = xyz;
	int sz = sizeof(xyz) / sizeof(xyz[0]);
	while (pa < &xyz[sz])
	{
		printf("%d,", *pa);
		pa++;
	}
	//Ұָ�����Ұָ�루����ģ�û��ȷ���Ƶģ�����ģ�
	int* qb;//ָ��δ��ʼ�����������֪�����ָ���ʱ�˿�Ӧ��ָ�����������NULL��������0��ʹ�ñ�ɿ�ָ�룬ֱ�ӷ��ʿ�ָ��ᱨ����ָ���������ʹ��ʱӦ�ü�ʱ��ΪNULL
	int* qc = &xyz[11];//Խ�����
	printf("\n%d\n", *test());
	int* pd = test();
	printf("%d\n", *pd);//�ռ��ͷ��ˣ���Ϊ����������ջ֡�ᱻ���٣��ǴӺ����д�����ָ���������ȻҲ���ɿ��ˣ�Ҳ����Ұָ���ˣ�ʹ��ʱӦ��������ֲ���������ָ��
	//assert��ָ�����������ԣ������ͷ�ļ�assert.h������������ʱȷ���������ָ������������������ֹ����(����ʾ�����·���ļ�������)������Ѿ�ȷ�������������˿�����#include<assert.h>ǰ����#define NDEBUG�ر�assert����release�汾��һ������assert����������ʱ��
	int* pf = NULL;
	assert(pf!=NULL);
	printf("1\n");
	//ָ���ʹ�úʹ�ָ����
	int a = 10; int b = 20;
	exchange(a,b);//�������ύ������Ϊ��ֵ��ʱ���βλ���ʱ����һ���Լ��Ŀռ䣬���βε��޸Ĳ�Ӱ��ʵ����(����������ͬҲһ��)
	printf("%d,%d\n", a, b);
	int* p1a = &a; int* p1b = &b;
	exchange1(&a, &b);//��ַ��������ʹ��ʵ�α��޸ģ��������Ҫ�޸��������������ݵĻ�һ����ô��ز���
	printf("%d,%d\n", a, b);
	return 0;
}
