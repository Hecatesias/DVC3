#include "libmy.h"

int		my_put_nbr(int nb) 
{
  if (n >= 10)
    {
      my_put_nbr(n / 10);
      my_put_nbr(n % 10);
    }
  else
    my_putchar(48 + n);
}