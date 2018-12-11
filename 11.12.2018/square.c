#include <stdio.h>
int x;
int kare(int x) {
  return x*x;
}
int main(int argc, char const *argv[]) {
  int i;
  for(i = 0; i <= 100; i++) {
    printf("%d^2 = %d\n", i, kare(i));
  }
  return 0;
}
