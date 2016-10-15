#include "list.h"

int main()
{
	DoubleLinkedList DLL;
	for (int i = 1; i < 10; i++)
	{
		DLL.add(i);
	}
	DLL.printList();
	_getch();
	return 0;
}