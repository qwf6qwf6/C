#define  _CRT_SECURE_NO_WARNINGS //不加用scanf会报错，提示不安全，要用scanf_s,但是二者使用方法不全相同
#include<stdio.h>
int main()
{
	int chengji = 0;
	float qqq = 0;
	char arr[10] = { 0 };//[]内为数组大小，有几个元素，如果scanf中直接用%s，输入时大于数组大小会报错，但是可以放入，在%s前加入数字就会丢弃后面的的，可以防止输入元素个数大于数组大小，注意最多只能比数组大小小1因为会自带个\0
	printf("请输入整数和4.5e12和字符串");
	int ret = scanf("%d-%f-%9s", &chengji, &qqq, arr);//前面是输入值类型，后面是地址，如果是变量记得要加取地址符号&，不然程序会崩，但是arr本身就是地址，所以没事，scanf会自动过滤掉空白符（%c不会在%c前面加入一个空格变成 %c就会过滤了，%s会因为会过滤空格而导致它读到第一个空格停止读取了并且会在字符末尾存储个、0使得其变为字符串）
	printf("整数是是：%d\n", chengji);
	printf("小数是%f\n", qqq);//e和E都是科学计数法的标志，e12为10的12次方，注意到出来后有时并不精确为4.5*10的12次方，因为浮点数有可能无法在内存中精确保存，但是直接输出4.5e12是可以的
	printf("scanf返回值是 =%d\n", ret);//scanf返回值为整数，读懂几个返回几，在读取审核数据前发生了读取错误或者到文件结尾，则返回常量EOF（-1）即end of file,(Tip:ctrl+Z然后回车键，三次后可以终止度数)
	printf("字符串是=%s", arr);
	//，scanf原理：当用户输入时先放入缓存区再依次读可能是所需格式的，直到第一个非所需格式的符号，如要读整数时输入了   abdcsds-1234.123，空格不读，字母不读，到-号开始读，到.号后面不可能是所需的了，故从-号读到.号前面
	//必须按照scanf内的输入顺序和格式输入，如本程序的%d-%f-%s，先输入%s的在输入前面的，前面的会被跳过，如果没-就仅能读到第一个，（如果用%*c就可以省略字符）


	return 0;
}