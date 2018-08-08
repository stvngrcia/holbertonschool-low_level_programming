#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*have no idea what I'm doing for this part*/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  
  if (n > 0)
    { 
      printf("%d is positive\n", n);
    }
  else
    { if (n == 0)
	{ printf("%d is zero\n", n);
	}
      else
	{ printf("%d is negative\n", n);
	}
    }  
  return (0);
}

/* %d is representing a part of memory for integer (in this case n) to fill in value when printing */
