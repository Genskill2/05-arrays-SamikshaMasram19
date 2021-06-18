#include <stdio.h>
#include <assert.h>


int max(int x[], int n){
    int i;
    int max = x[0];
    
    for (i=0; i<n; i++){
      if ( x[i] > max){
          max = x[i];  
          }
          }     
         return max;
          }


int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  assert (max(x, 7) == 10);
    printf("Max: passed\n");

  int y[] = {5};
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  }
