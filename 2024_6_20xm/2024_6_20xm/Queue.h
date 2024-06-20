#pragma once
//定义命名空间，解决重名问题。
namespace hq
{

	struct Node//重名
	{
		int val;
		struct Node* next;
	};
	//双向链表

	struct Queue
	{
		struct Node* head;
		struct Node* tail;
		int size;
	};

	void Init(struct Queue* pq);//重名
	void Push(struct Queue* pq, int x);
}