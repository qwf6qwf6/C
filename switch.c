#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int q, w;
	char f;
	while (scanf("%d%c%d", &q, &f, &w) != EOF)
	{
		switch (f)/*swich(选择的变量) { case结果:执行语句; break; }将选择的变量和case后面的结果对比，相等就执行这条case的执行语句
			break，终止循环，防止无限循环执行*/
		{
		    case  '+': printf("%d+%d=%d\n",q,w, q + w); break;
		    case  '-': printf("%d-%d=%d\n",q,w, q - w); break;
		    case  '*': printf("%d*%d=%d\n",q,w, q * w); break;
		    case  '/': printf("%d/%d=%d\n",q,w, q / w); break;
		    case  '%': printf("%d/%d=%d\n",q,w, q % w); break;
			default:printf("无法计算\n"); break;//在中间要加break，{}最后面可以不用加，因为已经是程序的末尾了
		}


	}
	
	
	return 0;
}