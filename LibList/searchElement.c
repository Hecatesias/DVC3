#include "liblist.h"

theList searchElement(theList myList, int value)
{
    element *tmp = myList;
    while(tmp != NULL)
    {
        if(tmp->val == value)
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}
