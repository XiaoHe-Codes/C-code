#pragma once
//���������ռ䣬����������⡣
namespace hq
{

	struct Node//����
	{
		int val;
		struct Node* next;
	};
	//˫������

	struct Queue
	{
		struct Node* head;
		struct Node* tail;
		int size;
	};

	void Init(struct Queue* pq);//����
	void Push(struct Queue* pq, int x);
}