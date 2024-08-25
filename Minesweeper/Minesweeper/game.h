#pragma once
#define Hang 9
#define Lie 9
#define hang Hang+2//#define可以自己设定变量.如果是和另一个变量的关系那就写成自己 带别人的算术式
#define lie Lie+2
void game();
int i;
int j;
void Initboard();
void buzhilei();
#include <stdio.h>//include头文件本质上是将头文件内容复制过去，所以可以把库函数也放进去
#include<stdlib.h>
#include<time.h>