#include<stdio.h>
#include"List.h"
#include"Queue.h"

int main()
{
	//printf("hello world\n");

	struct hq::QNode node1;
	struct hq::QNode node2;
	struct hq::QNode node3;
	return 0;
}
//不同文件可以用同一个命名空间。只要命名空间里面都内容编译器合起来不冲突就行。比如Node和QNode.