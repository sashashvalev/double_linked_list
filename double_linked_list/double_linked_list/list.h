#include <conio.h>
#include <iostream>
using namespace std;

class DoubleLinkedList
{
private:
	struct node
	{
		int data;
		node* prev;
		node* next;
	};
	node* head, *tail;


public:

	DoubleLinkedList();

	~DoubleLinkedList();
	/*
	1. Функция добавления в конец списка (append) */

	bool is_empty();

	void add(int data);

	void addend(int data);

	void insert(int data);

	void search(int data);

	void printList();
};

/*main context:
DoubleLinkedList dll;
*/