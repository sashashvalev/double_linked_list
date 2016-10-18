#include "list.h"


DoubleLinkedList::DoubleLinkedList()
{
	head = NULL;
	tail = NULL;
}

DoubleLinkedList::~DoubleLinkedList()
{}

bool DoubleLinkedList::is_empty()
{
	if (head == NULL && tail == NULL)
		return true;
	else return false;
}

void DoubleLinkedList::add(int data)
{
	node* curr = new node;
	curr->data = data;
	if (is_empty())
	{
		curr->prev = NULL;
		curr->next = NULL;
		head = curr;
		tail = curr;
	}
	else
	{
		head->prev = curr;
		curr->next = head;
		head = curr;
		curr->prev = NULL;
	}
}

void DoubleLinkedList::insert(int data)
{
	if (is_empty()) return;
	else
	{
		node* curr = head;
		while (curr != NULL && curr->data == data)
		{
			curr = curr->next;
		}
		node* newList = new node();
		newList->data = data;
		newList->prev = curr;
		curr->prev->next = newList;
		curr->prev = newList;
		newList->next = curr;
	}
}

void DoubleLinkedList::append(int data)
{
	if (is_empty()) return;
	else
	{
		node* curr = new node;
		curr->data = data;
		tail->next = curr;
		curr->prev = tail;
		tail = curr;
		curr->next = NULL;
	}
}
/*
void deleteElem(int data, elem head)
{
elem* curr = search(data, &head);
if (curr) {
elem *prew = curr->prev;
elem *next = curr->next;
prew->next = next;
next->prev = prew;
delete curr;
}
else cout << "not list";
}

void sortList(elem** head)
{
elem* curr = *head;
while (curr->next) {
if (curr->data > curr->next->data) {
int data = curr->data;
curr->data = curr->next->data;
curr->next->data = data;
curr = curr->next;
sortList(head);
}
else
curr = curr->next;
}
}
*/
void DoubleLinkedList::search(int data)
{
	if (is_empty()) return;
	else
	{
		node* curr = head;
		while (curr != NULL && curr->data == data)
		{
			curr = curr->next;
		}
	}
}

void DoubleLinkedList::printList()
{
	node* curr = head;
	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}