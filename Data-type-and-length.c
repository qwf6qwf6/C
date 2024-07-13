#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>//#include为拷贝黏贴，<>内为拷贝的对象，stdio.h中std为standard（标准），i为imput（输入），o为output（输出），所以包含输入输出的头文件都要包含stdio.h
#include<string.h>
int main() //int为关键字，函数的返回类型为整数型，和结尾的return0相互呼应；main函数，项目起始点，一个项目内不论多少个源文件仅仅只能有一个main函数，并且必须有；()内可加void，代表main函数没参数（其实main函数是有参数的，想用的时候就写，不想用的时候就不写）
{
	char qwf[] = { "abcdefg" };//字符串结尾都自带\0
	char qwf123[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g\0', };//g\0会导致g消失
	char qwf321[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g','\0', };//
	char qwf666[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };//单个字符输入后结尾没有\0
	printf("zifuchuan1\n"); //printf可以看成print打印和f（format）格式（printf为一个库函数（C语言标准库内提供的一种函数）），库函数被规定了函数名，参数，返回值，功能，但是实现方法是编译器不同的。
	printf("%s\n", "zifuchuan2\0");//直接""和先“%s”再,""都是打印字符串(结尾都自带一个\0，这是字符串的结束标志,如果在函数中一个个输入字符无\0那么会比原来多出乱码，乱码是在内存字符后面的，没结束就会继续加入进来)
	printf("%s\n", qwf);//
	printf("%s\n", qwf123);//
	printf("%s\n", qwf321);//
	printf("%s\n", qwf666);	//因为qwf666中是单个字符没有\0所以会往后输出到内存中下一个\0
	printf("%zd\n", strlen(qwf));//strlen是求字符串长度的函数，统计字符串中\0之前的字符个数,%zd是因为strlen返回的是size_t类型的值
	printf("%zd\n", strlen(qwf123));
	printf("%zd\n", strlen(qwf321));//qwf321中字符串最后多了个\0字符就可以正常计数了
	printf("%zd\n", strlen(qwf666));//由于qwf666是不带\0的，所以根据strlen会统计从字符串开始到下一个\0的字符个数
	printf("%c\n", 'a');//%c，''为打印字符，字符要用''标起来,如果直接用ASCII码值不用‘’
	printf("%d\n", 1);//%d为打印整数
	printf("%f\n", 1.2);//
	printf("%lf\n", 1.3);//%f和%lf都是打印一个小数，默认为小数点后六位(%+东西都为占位符，会被后面的取代)\n为换行
	return 0;//return关键字，返回一个值，{}内记得每个语句后面都要;
} //{}为函数体