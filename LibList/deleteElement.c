#include "Liblist.h"

myList      *deleteElementinFirst(myList *chainList)
{
    myList *toReturn;

    toReturn = chainList->next;
    if(chainList != NULL)
    {
        free(chainList);
        return (toReturn);
    }
    else
    {
      return (NULL);
    }
}

myList      *deleteElementinLast(myList *chainList)
{
    myList *tmp = chainList;
    myList *tmp2 = chainList;

    if(chainList == NULL)
      return (NULL);
    if(chainList->next == NULL)
    {
        free(chainList);
        return (NULL);
    }
    while(tmp->next != NULL)
    {
        tmp2 = tmp;
        tmp = tmp->next;
    }
    tmp2->next = NULL;
    free(tmp);
    return (chainList);
}
