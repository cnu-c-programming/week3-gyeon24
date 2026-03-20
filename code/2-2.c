#include <stdio.h>

void swap(int *x, int *y){
  int d = 0;
  d = *x;
  *x = *y;
  *y = d;
}

int main(){
  int x = 100, y = 200;

  printf("x = %d, y = %d\n", x, y);

  swap(&x, &y);
  printf("x = %d, y = %d\n", x, y);

  return 0;
}
