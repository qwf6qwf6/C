#include<stdio.h>
int main()
{
	float a = 20.0f;
	float b = 30.0f;
	int c = 20;
	int d = 30;
	printf("a+b=%d\n", a + b);//�ӷ�
	printf("c+d=%d\n", c + d);
	printf("a-b=%d\n", a - b);//����
	printf("c-d=%d\n", c - d);
	printf("a*b=%d\n", a * b);
	printf("c*d=%d\n", c * d);
	printf("a/b=%f\n", a / b);
	printf("c/d=%f\n", c / d);//���̣��������Ͳ��䣬������Ϊ������ֻ������������֡���һ��ΪС��������Ϳ���ΪС��
	printf("%d\n", c % d);
	printf("%d\n", 20 % -6);
	printf("%d\n", -20 % 6);//��ģ����������Ҫ�����߶�Ҫ������,��+-�ſ���һ����
	printf("(100/30)*30=%d\n", (100 / 30) * 30);
	printf("(100/30.0)*30.0=%d\n", (100 / 30.0f) * 30);
	int q = 20;
	int w = 30;
	int f = 40;//������ʼ��,������ö���ʼ��һ�£���Ȼ�еı����������ױ������Ҿֲ�����δ��ʼ��ʱֵ�������
	q = w = f + 10;//������ֵ�����������θ�ֵ
	q += 10;//Ҳ��д��q=q+10�����������10��-*/%ͬ��
	printf("q=%d", q);
	printf("w=%d", w);
	printf("f=%d\n", f);
	int x = 1;
	int m = 1;
	int y = 10;
	int z = 20;
	y = ++x;//ǰ��++����++��ʹ�ã��ɿ�����x=x+1��y=x(--ͬ��)
	z = m++;//����++����ʹ�ú�++���ɿ�����z=x��x=x+1��--ͬ��
	printf("y=%d", y);
	printf("z=%d\n", z);
	int n = 1;
	int j = -n;//������+û�䣬-ȡ�෴��
	printf("j=%d\n", j);
	double e = 3.14;
	int g = (int)e;//ǿ��ת������(����)
	printf("%d\n", g);
	return 0;
}