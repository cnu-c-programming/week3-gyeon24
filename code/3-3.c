#include <stdio.h>
#include <stdarg.h>

int average(int num, ...){
  int sum = 0;
  va_list args;

  va_start(args, num);

  for (int i = 0; i < num; i++) {
      sum += va_arg(args, int);
  }

  va_end(args);

  return sum / num;
}

int main(){
  printf("%d\n", average(3,10,20,30));
  printf("%d\n", average(5,10,20,30,40,50));
  return 0;
}
