#include <stdio.h>

int main(int argc, char const *argv[]) {
  float i;
  float pi = 0;
  for(i = 1; i < 100; i = i + 2) {
    pi = pi + 4/(i) - 4/(i+2);
    printf("PI = %f\n", pi);
  }
  return 0;
}
