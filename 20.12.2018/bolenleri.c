#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("%d\n", tamBolenToplam(284));
  return 0;
}
//Sayının tam bölenlerini toplayıp geri gönderen fonksiyon
int tamBolenToplam(int x) {
  int i, bolenler = 0;
  for(i = 1; i <= x/2; i++) {
    if( x % i == 0 ) {
      bolenler = bolenler + i;
    }
  }
  return bolenler;
}
