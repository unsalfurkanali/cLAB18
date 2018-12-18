#include <stdio.h>
#define BOYUT 5
int main(int argc, char const *argv[]) {
  int dizi[BOYUT];
  int i, toplam = 0;
  for(i = 0; i < BOYUT; i++) {
    puts("Eleman giriniz: ");
    scanf("%d", &dizi[i]);
  }
  for(i = 0; i < BOYUT; i++) {
    toplam = toplam + dizi[i];
  }
  printf("Toplam = %d", toplam);
  return 0;
}
