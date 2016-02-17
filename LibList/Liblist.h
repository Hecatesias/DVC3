#ifndef _LIBLIST_H__
#define _LIBLIST_H__

#include "../Libmy/libmy.h"

/*Un element de la liste*/
typedef struct myList
{
  int number;
  struct myList *next;
} myList;

#endif
