#include <stdio.h>

int main () {
  int max = 0;
  int inputNum;

  for (int i = 1; i <= 5; i++) {
    printf("Enter Number : ");
    scanf("%d", &inputNum);
    max = (max < inputNum) ? inputNum : max;
  }
  printf("Highest int is : %d\n", max);
  return 0;
}