#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sayi = 0, toplam = 0;
  for(sayi = 2; sayi <=100; sayi = sayi + 2) { //sayi+=2
    printf("%d\n", toplam);
    toplam += sayi; // toplam = toplam + sayi;
  }
  printf("%d", toplam);
  return 0;
}
