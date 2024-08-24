#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
static int add = 200;//比如这里的static就使得它在其他程序中不能被声明，如果没有的话，程序1会报错，因为有两个add