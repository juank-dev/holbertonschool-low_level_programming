#include <stdio.h>

int main(void)
{
  int i;
  long a, b, r;
  a = 1;
  b = 2;
  r= 0;

  printf("2");
  for(i = 1; i <= 48; i++)
  {
    if(r >= 4000000)
    {
      break;
    }
      r = a + b;
      a = b;
      b = r;
    if(r % 2 == 0) 
    {
      printf(" ,%ld",r);
    }
  }
 
 return 0;
}
