//C++����C
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

//������ͻ����
//����Ա�Ϳ�
//����Ա�ͳ���Ա
int main()
{
	printf("hello world\n");
	printf("%d\n", rand);
}*/


int x = 0;//ȫ�ֱ�����

//��
int main()
{
	int x = 1;//�ֲ�������

	printf("hello world\n");
	printf("%d\n", x);//�ֲ����ȣ��ͽ�ԭ�򡣷��ʵ��Ǿֲ����������1��
	//����Ҳ��Ĭ�Ϸ��ʾֲ���

	return 0;
}
//���ڣ��Ҿ���Ҫ����ȫ�ֱ�������Ҫ���0�������ã����������޶���
int x = 0;//ȫ�ֱ�����
int main()
{
	int x = 1;//�ֲ�������

	printf("hello world\n");
	printf("%d\n", ::x);//������Ϊ�գ�Ĭ�Ϸ���ȫ�ֱ��������0��

	return 0;
}
/*��ȫ����Ӱ���������ڣ�Ӱ����ʣ����ֲ���Ӱ���������ڣ�Ӱ����ʣ���
�����ռ��򣨲�Ӱ���������ڣ�ֻӰ����ʣ�ֻ�ܶ�����ȫ�֡���ȫ�ֳ�ͻ�Ķ������и��롣��������
//ͬһ���򡢲�ͬ�򣬶����ܶ�����ͬ�ı���������Ϊ���ض��塣
//��ʱ��Ҫ������ͬ�ı�����������*/
#include<stdio.h>

namespace bit1//�ؼ���,���涨����һ����
{
	int x = 0;
}
namespace bit2
{
	int x = 1;
}

/*������������ԭ��
��ָ����1����ǰ�ֲ���
2��ȫ����
ָ����3�����ָ���ˣ�ֱ��ȥָ��������*/
int main()
{
	printf("%d\n", x);
	printf("%d\n", x);
	return 0;
}