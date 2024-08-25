#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//算n的阶乘(用递归方法做)，提示:n!=n*(n-1)!
int fact(int n)
{
	if (n == 0)//限制条件,每次函数调用都要为这次调用在栈区申请空间（这块空间叫做运行时堆栈,或者函数栈帧空间）,回归的时候会销毁这块空间，如果没限制条件，一直申请空间会导致栈区溢出
		return 1;
	else
		return n * fact(n - 1);
}



int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = fact(n);
	printf("%d", r);
	return 0;
}
//递归优点:简洁，好说明,很快就能想到
//递归缺点:效率没迭代高，并且一在申请栈区空间，占用内存大