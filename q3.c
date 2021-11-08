#include <stdio.h>

int main() {
  int parKmTaka = 2;
  int toll = 20;
  int startStop, endStop, desStart, desEnd;
  int rajshahi = 0, abdulpur = 50, isordi = 65, ullapara = 100, tangail = 170, dhaka = 230;

  printf("1. Rajshahi\n2. Abdulpur\n3. Ishawrdi\n4. Ullapara\n5. Tangail\n6. Dhaka\n7. Exit\nSelect your station: ");
  scanf("%d %d", &startStop, &endStop);

  if(startStop == 7 || endStop == 7) {
    printf("Exited..\n");
    return 0;
  }
  
  switch (startStop)
  {
  case 1:
    desStart = rajshahi;
    break;
  case 2:
    desStart = abdulpur;
    break;
  case 3:
    desStart = isordi;
    break;
  case 4:
    desStart = ullapara;
    break;
  case 5:
    desStart = tangail;
    break;
  case 6:
    desStart = dhaka;
    break;
  
  default:
    printf("Invalid input!");
    break;
  }

  switch (endStop)
  {
  case 1:
    desEnd = rajshahi;
    break;
  case 2:
    desEnd = abdulpur;
    break;
  case 3:
    desEnd = isordi;
    break;
  case 4:
    desEnd = ullapara;
    break;
  case 5:
    desEnd = tangail;
    break;
  case 6:
    desEnd = dhaka;
    break;
  
  default:
    printf("Invalid input!\n");
    break;
  }
  int totalCost = 0;
  int crossDesc = desEnd - desStart;
  
  if (crossDesc < 0){
    totalCost = (crossDesc * 2 * -1) + toll;
  }else{
    totalCost = (crossDesc * 2) + toll;
  }
  
  
  printf("Total cost : %d\n",totalCost);

  return 0;
}