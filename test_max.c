#include <stdio.h>

int max(int [], int ){
    
int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);
    printf("Max: passed\n");

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
