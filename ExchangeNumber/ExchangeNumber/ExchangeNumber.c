#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0; int b = 0;
	scanf("%d%*c%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n%d,%d", a, b);//算术法，本质上利用的是a+b-b=a,a+b-(a+b-b)=a,有点循环的感觉缺点：a+b可能超出了int类型的范围了
	int q = 0;int w = 0;
	scanf("%d%*c%d", &q, &w);
	q = q ^ w;
	w = q ^ w;
	q = q ^ w;
	printf("\n%d,%d",q,w);
	//异或运算:相同为1相异为0
	//特点就是亦或两次会变回来，先将位置放到单个上，其他位置同理，因为1^1=0,1^0=1,假设这位为1，另一个为0，1^0=0,0^0=1,所以就是(0^0)^0=1^0=0,假设这位为1，另一位也为1，1^1=0,0^1=1,所以就是(1^1)^1=0^1=1,其他位置同理，所以a1对a2取两次亦或后会变回a1，变回自己后直接进行第二步就可以变出a2了
	return 0;
}