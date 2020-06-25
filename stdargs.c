#include <stdio.h>
#include <stdarg.h>

int add_up (int count, ...)
{
  va_list ap;
  int sum=0;
  int i;

  va_start(ap, count);
  for (i=0;i<count; i++) 
    sum +=va_arg(ap, int);
  va_end(ap);
  return sum;
}

int main (int argc, char * argv[])
{
  fprintf(stdout, "%d\n", add_up(5, 1,2,3,4,5));
  return 0;
}

