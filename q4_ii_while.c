#include <stdio.h>

int main () {
  int sum = 0,i=1;

  while (i <= 99)
  {
    sum += i;
    i += 2;
  }
  printf("%d\n", sum);
  
  return 0;
}