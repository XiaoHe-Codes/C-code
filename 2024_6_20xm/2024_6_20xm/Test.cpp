#include<stdio.h>
#include"List.h"
#include"Queue.h"

//展开命名空间
//using namespace hq;

//std是所有C++库的命名空间。
#include<iostream>
using namespace std;

int main()
{
	//printf("hello world\n");
	/*
	struct hq::QNode node1;
	struct hq::QNode node2;
	struct hq::QNode node3;
	return 0;*/

	//指定
	std::cout << "hello word" << std::endl;
	std::cout << "hello word" << std::endl;
	std::cout << "hello word" << std::endl;
	std::cout << "hello word" << std::endl;
	cout << "hello word" << endl;//命名空间域被打开
}
//不同文件可以用同一个命名空间。只要命名空间里面都内容编译器合起来不冲突就行。比如Node和QNode.