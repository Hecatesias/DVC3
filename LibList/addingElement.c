#include "Liblist.h"

/*Ajouter un Element*/

myList		*addingInFirst(myList *chainList, int value)
{
    myList *newElement;
    
    newElement = malloc(sizeof(chainList));
    newElement->number = value;
    newElement->next = chainList;
    return (newElement);
}

myList		*addingInLast(myList *chainList, int value)
{
    myList	*newElement;
    myList	*tmp;
    
    newElement = malloc(sizeof(chainList));
    newElement->number = value;
    newElement->next = NULL; /*Le pointeur sur l'element d'apres n'existe pas c'est pour ca qu'on l'assigne a NULL*/
    tmp = chainList;
    if(chainList == NULL)
    {
      return (newElement);
    }
    else
    {
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newElement;
        return (chainList);
    }
}
