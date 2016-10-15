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
	1. ������� �������� ������������� ������ (bool is_empty())
	2. ������� ���������� � ������ ������ (add)
	3. ������� ���������� � ����� ������ (append) */

	bool is_empty();

	void add(int data);

	void insert(int data);

	void search(int data);

	void printList();
};

/*main context:

DoubleLinkedList dll;
*/