#include <stdio.h>
#define BOYUT 10

int main(int argc, char const *argv[]) {
  int dizi[BOYUT] = { 5, 6, 12, 3, 2, 6, 15, 23, 15, 10 };
  int gecici;
  int i;
  int j;

  for(i = 0; i < BOYUT; i++) {
    printf("%d ", dizi[i]);
  }

  for(gecici = 1; gecici < BOYUT; ++gecici ) {
    for(i = 0; i < BOYUT - 1; ++i) {
      if(dizi[i] > dizi[i + 1]) {
        j = dizi[i];
        dizi[i] = dizi[i+1];
        dizi[i+1] = j;
      }
    }
  }
  for(i = 0; i < BOYUT; i++) {
    printf("%d ", dizi[i]);
  }
  return 0;
}
