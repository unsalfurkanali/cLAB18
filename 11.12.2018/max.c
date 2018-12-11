#include <stdio.h>

int max(int x, int y, int z) {
  int maks = x;

  if(y > maks) {
    maks = y;
  }
  if(z > maks) {
    maks = z;
  }
  return maks;
}

int main(int argc, char const *argv[]) {
  printf("%d %d %d arasindan max %d\n", 2, 3, -3, max(2,3,-3));
  return 0;
}
