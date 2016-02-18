#include "Liblist.h"

myList	*deleteElementinFirst(myList *myList)
{
    myList *toReturn;

    toReturn = myList->next;
    if(myList != NULL)
    {
        free(myList);
        return (toReturn);
    }
    else
    {
      return (NULL);
    }
}
/*
myList	*deleteElementinLast(myList *myList)
{
    myList* tmp = myList;
    myList* tmp2 = myList;

    if(myList == NULL)
      return (NULL);
    if(myList->next == NULL)
    {
        free(myList);
        return (NULL);
    }
 

    while(tmp->next != NULL)
    {
        tmp2 = tmp;
        tmp = tmp->next;
    }
    tmp2->next = NULL;
    free(tmp);
    return (myList);
}
*/
