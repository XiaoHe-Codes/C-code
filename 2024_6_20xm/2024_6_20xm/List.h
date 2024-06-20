#pragma once
namespace hq
{
	struct QNode//重名
	{
		int val;
		struct QNode* next;
		struct QNode* prev;
	};
	//双向链表

	void Init(struct QNode* phead);//重名
	void PushBack(struct QNode* head, int x);
}
//1,3:29:00