#include "Queue.h"

void test1()
{
	Queue q;
	QueueInit(&q);
}

void test2()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
}

void test3()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	QueuePop(&q);
	//QueuePop(&q);
}

void test4()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

}

test5()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);
	printf("%d\n", QueueFront(&q));
	printf("%d\n", QueueBack(&q));

	QueueDestroy(&q);
}

void test6()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 2);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 3);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 4);
	printf("%d ", QueueFront(&q));
	QueuePop(&q);
	QueuePush(&q, 10);
	QueuePush(&q, 20);
	QueuePush(&q, 30);
	QueuePush(&q, 40);
	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}