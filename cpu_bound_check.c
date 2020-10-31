#include "types.h"
#include "user.h"

int dumb_stuff(int);

volatile unsigned long iter;

void report()
{
  printf(2,"COUNT|%ld|1|lps\n", iter);
  exit();
}

int main(int	argc, char	*argv[])
{
  int result = 0;

  iter = 0;

  while (iter <= 10)
  {
    ++iter;
    result = dumb_stuff(result);
  }
  exit ();
}


/********* dumb_stuff ********/
int dumb_stuff(int i)
{
#ifndef arithoh
  int	x, y, z;
  z = 0;
#endif
  for (i=2; i<=101; i++)
  {
#ifndef arithoh
    x = i;
    y = x*x;
    z += y/(y-1);
  }
  return(x+y+z);
#else
  }
return(0);
#endif
}