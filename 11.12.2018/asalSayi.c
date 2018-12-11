#include <stdio.h>

int asal(int x);
int main(int argc, char const *argv[]) {
  int i;
  for(i = 2; i < 100; i++) {
    printf("Sayi = %d Asallik = %d\n", i, asal(i));
  }
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
