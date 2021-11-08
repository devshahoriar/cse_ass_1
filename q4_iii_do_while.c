#include <stdio.h>

int main () {
  int sum = 0,i=1;

  do
  {
    sum += i;
    i += 2;
  } while (i <= 99);
  
  printf("%d\n", sum);
  
  return 0;
}