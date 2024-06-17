//C++兼容C
#include<stdio.h>

int main()
{
	printf("hello world\n");

	return 0;
}

#include<iostream>
using namespace std;

int main()
{
	cout << "hello world" << endl;

	return 0;
}
#include<stdio.h>
#include<stdlib.h>

/*int rand = 10;

//命名冲突问题
//程序员和库
//程序员和程序员
int main()
{
	printf("hello world\n");
	printf("%d\n", rand);
}*/


int x = 0;//全局变量。

//域
int main()
{
	int x = 1;//局部变量。

	printf("hello world\n");
	printf("%d\n", x);//局部优先，就近原则。访问的是局部变量，输出1。
	//函数也是默认访问局部域。

	return 0;
}
//现在，我就想要访问全局变量，想要输出0。可以用：：域作用限定符
int x = 0;//全局变量。
int main()
{
	int x = 1;//局部变量。

	printf("hello world\n");
	printf("%d\n", ::x);//域的左边为空，默认访问全局变量。输出0。

	return 0;
}
/*域：全局域（影响生命周期，影响访问）、局部域（影响生命周期，影响访问）、
命名空间域（不影响生命周期，只影响访问，只能定义在全局。对全局冲突的东西进行隔离。）、类域。
//同一个域、不同域，都不能定义相同的变量名，因为会重定义。
//有时需要定义相同的变量名，所以*/
#include<stdio.h>

namespace bit1//关键字,后面定义了一个域。
{
	int x = 0;
}
namespace bit2
{
	int x = 1;
}

/*编译器搜索的原则：
不指定域：1、当前局部域
2、全局域
指定域：3、如果指定了，直接去指定域搜索*/
int main()
{
	printf("%d\n", x);
	printf("%d\n", x);
	return 0;
}