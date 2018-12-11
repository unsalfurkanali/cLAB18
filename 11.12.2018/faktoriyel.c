#include <stdio.h>

double faktoriyel(int x) {
  int i;
  double sonuc = x;
  for(i = 1; i < x; i++) {
    sonuc = sonuc * i;
  }
  return sonuc;
}

int main(int argc, char const *argv[]) {
  int x;
  for(x = 1; x < 100; x++) {
    printf("%d! = %.0lf\n", x, faktoriyel(x));
  }
  return 0;
}
