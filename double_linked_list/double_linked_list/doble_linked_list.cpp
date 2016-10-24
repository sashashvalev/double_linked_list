#include "list.h"


int main()
{
	DoubleLinkedList List;
	for (int i = 0; i < 10; i++)
	{
		List.add(i);
	}
	List.printList();
	List.insert(3, 8);
	List.printList();
	List.append(5);
	List.printList();
	List.deleteElem(3);
	List.printList();
	List.sortList();
	List.printList();
	_getch();
	return 0;
}