#include "libmy.h"

int   my_strcmp(char *str, char *str2)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == str2[i])
	i++;
      else
	return (-1);
    }
  return (0);
}