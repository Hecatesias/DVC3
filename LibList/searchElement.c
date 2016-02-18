#include "liblist.h"

myList      searchElement(myList *chainList, int value)
{
    myList *tmp = chainList;
    while(tmp != NULL)
    {
        if(tmp->next == value)
        {
            return *(tmp);
        }
        tmp = tmp->next;
    }
    return *(chainList);
}
