#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  for(i = 0; i < 40; i++) {
      printf("fibonacci(%d) = %lf\n", i, fibonacci(i));
  }

  return 0;
}

double fibonacci(double n) {
  if(n == 0) return 0;
  if(n == 1) return 1;
  return fibonacci(n-1) + fibonacci(n-2);
}
