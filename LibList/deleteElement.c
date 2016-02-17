#include "liblist.h"

theList deleteElementinFirst(theList myList)
{
    if(myList != NULL)
    {
        element* toReturn = myList->next;
        free(myList);
        return toReturn;
    }
    else
    {
        return NULL;
    }
}

theList deleteElementinLast(theList myList)
{
    if(myList == NULL)
        return NULL;
    if(myList->next == NULL)
    {
        free(myList);
        return NULL;
    }
 
    element* tmp = myList;
    element* tmp2 = myList;
    while(tmp->next != NULL)
    {
        tmp2 = tmp;
        tmp = tmp->next;
    }
    tmp2->next = NULL;
    free(tmp);
    return myList;
}
