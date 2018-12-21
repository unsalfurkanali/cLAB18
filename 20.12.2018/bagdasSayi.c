#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, sayi = 0;
  for(i = 2; i < 10000; i++) {
    if( i == d(d(i)) && d(i) != i ) {
      printf("%d ve %d bir bağdas Sayidir\n", i, d(i));
      sayi++;
    }
  }
  return 0;
}

int d(int x) {
  int i, bolenler = 0;
  for(i = 1; i <= x/2; i++) {
    if( x % i == 0 ) {
      bolenler = bolenler + i;
    }
  }
  return bolenler;
}
