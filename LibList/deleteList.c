#include "Liblist.h"

myList		*deleteList(myList *chainList)
{
	myList *oneList;
	while (chainList->next != NULL)
	{
		free(chainList);
	}
	return (NULL);
}