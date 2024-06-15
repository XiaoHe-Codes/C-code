#include<stdio.h>

namespace bit1
{
	int x = 0;
}

namespace bit2
{
	int x = 1;
}
//域
//：：域作用限定符
//全局域
//局部域
//命名空间域
//类域

int main()
{
	printf("%d\n", x);
	printf("%d\n", x);
}