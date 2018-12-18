#include <stdio.h>

int main(int argc, char const *argv[]) {
  printf("%d\n", tersleyen(123));
  return 0;
}

int tersleyen(int sayi) {
  int yeniSayi = 0, gecici, kalan;
  for(gecici = sayi; gecici > 0; gecici = gecici / 10) {
    kalan = gecici % 10;
    yeniSayi = yeniSayi * 10 + kalan;
  }
  return yeniSayi;
}
