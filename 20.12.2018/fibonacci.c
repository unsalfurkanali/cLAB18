#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  for(i = 0; i <= 20; i++) {
    printf("Fibonacci dizisi %d.eleman = %d\n", i, fibonacci(i));
  }
  return 0;
}
/*
  Genel Fibonacci Dizisi tanımladık
  0 1 1 2 3 5 8 13 ....
  Yani son iki dizi elemanının toplamı. İlk fibonacci elemanı 0, ikincisi 1 olarak tanımlanmış
  Matematiksel olarak;
  fib(0) = 0
  fib(1) = 1
  fib(n) = fib(n-1) + fib(n-2)
*/
int fibonacci(int x) {
  if( x == 0 ) return 0;
  if( x == 1 ) return 1;
  return fibonacci(x - 1) + fibonacci(x - 2);
}
