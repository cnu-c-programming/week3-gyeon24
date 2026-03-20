#include <stdio.h>
#include <stdarg.h>

int max_of(int num, ...){
  int max = 0;
  va_list args;

  va_start(args, num);

  for(int i=0;i<num;i++){
    int vs = va_arg(args, int);
    if(max < vs){
      max = vs;
    }
  }

  va_end(args);
  return max;
}

int main(){
  printf("%d\n", max_of(4,5,12,3,9));
  printf("%d\n", max_of(6,1,2,3,4,5,6));
  printf("%d\n", max_of(3,100,200,300));
  return 0;
}
