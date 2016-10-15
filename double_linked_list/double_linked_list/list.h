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

	/*TODO:
	0. Constructor
	1. Функция проверки существования списка (bool is_empty())
	2. Функция добавления в начало списка (add)
	3. Функция добавления в конец списка (append) */

	bool is_empty();

	void add(int data);

	void insert(int data);

	void search(int data);

	void printList();
};

/*main context:

DoubleLinkedList dll;
*/