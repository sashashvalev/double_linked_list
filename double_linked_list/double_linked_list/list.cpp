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

void DoubleLinkedList::insert(int base, int valive)
{
	if (is_empty()) return;
	else
	{
		node* curr = search(base), *newList = new node;
		newList->data = valive;
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

void DoubleLinkedList::deleteElem(int data)
{
	if (is_empty()) cout << "not list" << endl;
	else
	{
		node* curr = search(data);
		if (curr->prev != NULL && curr->next != NULL)
		{
			node *PREV = curr->prev;
			node *NEXT = curr->next;
			PREV->next = NEXT;
			NEXT->prev = PREV;
			delete curr;
			return;
		}
		if (curr->prev == NULL && curr->next != NULL)
		{
			head = curr->next;
			delete curr;
			return;
		}
		if (curr->prev != NULL && curr->next == NULL)
		{
			tail = curr->prev;
			delete curr;
			return;
		}
		if (curr->prev == NULL && curr->next == NULL)
		{
			delete curr;
			head = NULL;
			tail = NULL;
			return;
		}
	}
}

void DoubleLinkedList::sortList()
{
	if (is_empty()) cout << "not list" << endl;
	else
	{
		node* curr = head;
		while (curr->next)
		{
			if (curr->data > curr->next->data)
			{
				int data = curr->data;
				curr->data = curr->next->data;
				curr->next->data = data;
				curr = curr->next;
				sortList();
			}
			else
				curr = curr->next;
		}
	}
}

DoubleLinkedList::node* DoubleLinkedList::search(int data)
{
	if (is_empty()) return NULL;
	else
	{
		node* curr = head;
		while (curr != NULL && curr->data != data)
		{
			curr = curr->next;
		}
		return curr;
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
