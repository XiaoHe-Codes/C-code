#pragma once
namespace hq
{
	struct QNode//����
	{
		int val;
		struct QNode* next;
		struct QNode* prev;
	};
	//˫������

	void Init(struct QNode* phead);//����
	void PushBack(struct QNode* head, int x);
}
//1,3:29:00