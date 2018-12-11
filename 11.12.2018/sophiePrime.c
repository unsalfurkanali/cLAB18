#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, j = 0;

  for(i = 2; i < 100000; i++) {
    if(asal(i) && asal(2*i+1)) {
      printf("%d bir sophie asalidir\n", i);
      j++;
    }
    else ;
  }
  printf("100000'e kadar olan sophie asallari = %d\n", j);
  return 0;
}

int asal(int x) {
  int i;
  for(i = 2; i < x ; i++) {
    if( x % i == 0) return 0;
    else ;
  }
  return 1;
}
