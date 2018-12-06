#include <stdio.h>
//#include <math.h>

int main(int argc, char const *argv[]) {
  float r, a, p;
  unsigned int n;
  p = 1000;
  r = 0.05;
  n = 10;
  a = p*(1+r)^n;
  printf("%f ana para %d yil sonra %f olur\n", p, n, a);
  return 0;
}
