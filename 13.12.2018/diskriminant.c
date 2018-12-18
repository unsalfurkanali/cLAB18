#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int  a, b, c;
  float x1, x2, delta;
  puts("a,b ve c katsayilarini giriniz: ");
  scanf("%d %d %d", &a, &b, &c);
  delta = b*b - 4*a*c;
  if(delta >= 0) {
    delta = sqrt(delta);
    x1 = (-b + delta)/(2*a);
    x2 = (-b - delta) / (2*a);
    printf("x1 = %f x2 = %f\n", x1, x2);
  }
  else {
    puts("Reel kok yoktur.");
  }
  return 0;
}
