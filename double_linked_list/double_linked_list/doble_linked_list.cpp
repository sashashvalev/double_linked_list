#include "list.h"

int main()
{
	DoubleLinkedList DLL;
	for (int i = 0; i < 10; i++)
	{
		DLL.add(i);
	}
	DLL.insert(3);
	DLL.append(5);
	DLL.printList();
	_getch();
	return 0;
}