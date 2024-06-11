//C++兼容C
//1：
#include<stdio.h>

int main()
{
	printf("hello world\n");

	return 0;
}
//普通
//2：
#include<iostream>
using namespace std;

int main()
{
	cout << "hello world" << endl;

	return 0;
}
//3:
#include<stdio.h>

int rand = 10;//rand变量。
//重定义：命名冲突。

int main()
{
	printf("hello world\n");
	//printf("%d\n", rand);
}
//4：
#include<stdio.h>
#include<stdlib.h>//头文件包含一个rand函数。

int rand = 10;//函数与变量冲突。
//重定义：C语言中叫：命名冲突。
//程序员的命名和库的命名

int main()
{
	printf("hello world\n");
	//printf("%d\n", rand);//rand不明确。
}
//1、02：57：00