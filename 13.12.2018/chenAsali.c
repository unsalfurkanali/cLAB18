#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, frekans = 0;
  for(i = 2; i < 100000; i++) {
    if(asal(i) && asal(i+2)) {
      printf("%d bir chen asalidir. (i, i+2)\n", i);
      frekans++;
    }
    else if(bolen(i+2) && asal(i)) {
      printf("%d bir chen asalidir. (iki asal carpimi)\n", i);
      frekans++;
    }
  }
  printf("100.000'e kadar %d chen asali vardir\n", frekans);
  return 0;
}

int asal(int x) {
  int i;
  for(i = 2; i < x; i++) {
    if(x % i == 0) return 0;
    else ;
  }
  return 1;
}

int bolen(int x) {
  int a = 0, i;
  for(i = 2; i <= x/2; i++) {
    if(x % i == 0) a++;
  }
  if(a == 2) return 1;
  else return 0;
}
