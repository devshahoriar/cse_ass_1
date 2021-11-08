#include <stdio.h>

int main () {
  int a = 10;
  int b =20;
  
  printf("i) a/5+5/b = %d\n", a/5+5/b);
  printf("ii) -a+b%3 = %d\n", -a+b%3);
  printf("iii) ++a+b-- = %d\n", ++a+b--);
  printf("iv) 1/2*(a-b) = %d\n", 1/2*(a-b));
  return 0;
}