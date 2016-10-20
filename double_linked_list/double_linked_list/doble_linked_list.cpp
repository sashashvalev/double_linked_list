#include "list.h"
/**/
#ifdef _DEBUG
#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC
#endif
/**/

int main()
{
	/**
	_CrtMemState _ms;
	_CrtMemCheckpoint(&_ms);
	/**/
	DoubleLinkedList DLL;
	for (int i = 0; i < 10; i++)
	{
		DLL.add(i);
	}
	DLL.insert(3);
	DLL.append(5);
	DLL.printList();
	/**/
	_CrtDumpMemoryLeaks();
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_DEBUG);
	/**/
	_getch();
	return 0;
}