#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test(int arr[])
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);
	printf("sz2=%d\n",sz2);
}
int main()
{
	int arr[10] = { 0 };
	printf("&arr[0]=%p\n",&arr[0]);
	printf("&arr   =%p\n", &arr);
	printf(" arr   =%p\n", arr);//���Է��ֶ��Ǵ���������һ��Ԫ�صĵ�ַ����Ϊ&�����ʱ����Ȼȡ�����������飬����һ����ȡ��һ������������ĵ�ַ
	printf("&arr[0]+1=%p\n", &arr[0]+1);
	printf("&arr+1   =%p\n", &arr+1);
	printf(" arr+1   =%p\n", arr+1);//���Է���&arr[0]+1=arr+1!=&arr+1����Ϊ&arr��ȡ���������飬Ȼ����+1�൱��int[10]*��ָ��+1�����Ǳȱ����ֶ���40���ֽ�(������������)�����Կ��Կ���&arr��&arr[0]�����������
	//arr��Ȼ�󲿷������=&arr[0]��������sizeof(arr)��&arrʱ���������������
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* p = arr;
	for (i = 0;i < sz; i++)
		scanf("%d", p + i);
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", arr[i]);
		
	}
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", *(arr + i));

	}
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", p[i]);

	}
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", i[arr]);//��������д��i[arr]

	}
	printf("\n%d\n", 1[arr]);//����[arr]ͬ��
	//���Է���arr[i]==p[i]==*(p+i)==*(arr+i),��ʵarr[i]��������ִ�е�ʱ��Ҳ���Զ�ת��Ϊ*(arr+i)�ķ�ʽִ�еģ���������û����pΪ���飬��Ȼ������p[i]��ʽ���*(p+i)
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1=%d\n", sz1);
	test(arr);//��һ�����10���ڶ���x86���1��x64���8����Ϊ���鴫�εı���ʱ��������Ԫ�صĵ�ַ��ָ�룩�������ββ��ֲ�����Ĵ������飬����Ӧ����ָ��������գ��������ⲿ������arr�Ǹ�ָ�룬��x86�Ļ�����ָ����ռ���ֽ���4��x64��������8
	//���鴫�Σ��βο���д��������ʽ����ʵ��Ϊ�˷�����⣬����ʹ�ã������β�Ҳ����д��ָ���������ʽ����������鴫�εı��ʣ�
	
	//����ָ��

	int a = 0;
	int* pa = &a;//һ��ָ��
	int** ppa = &pa;//����ָ�루pa�����a�ĵ�ַ��ͬʱҲ�������Լ��Ŀռ䣬ppa�����pa�ĵ�ַ��int**���Կ���int* *ͬ�����������ļ��弶ָ��
	**ppa = 1;//���ν����ã����Կ���*(*ppa),Ҳ����*pa��Ҳ����a
	
	//ָ�����飺���ָ�������
	char q = 'q';
	char w = 'w';
	char f = 'f';
	char* qwf[3] = {&q,&w,&f};
	for (i = 0; i < 3; i++)
		printf("%c,", *qwf[i]);//������*qwf[i]��Ϊqwf[i]�ǵ�ַ���Ե�ַ���н����þͿ��Եõ������ַ������
	printf("\n");
	//����ָ������ģ���ά����
	int arr1[3] = { 1,2,3 };
	int arr2[3] = { 4,5,6 };
	int arr3[3] = { 7,8,9 };
	int* arr4[3] = { arr1,arr2,arr3 };//��Ϊ�����arr1ʵ������arr1��Ԫ�صĵ�ַ��������int*���ͣ����������������ָ������
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
			printf("%d,", arr4[i][j]);//�������ҿ�arr4[i][j],���統i=1ʱ����arr4[1][j],arr4[1]�����ó���Ϊarr1��Ҳ����arr1[j]
		printf("\n");
	}
	
	return 0;
}



