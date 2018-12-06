#include <stdio.h>

int main(void) {
  int ogrenciSayisi = 0, not = 0;
  float toplamNot = 0;
  float ortalama = 0;
  while(1) {
    printf("Not giriniz. (Sonlandirmak icin -1)\n");
    scanf("%d", &not);
    if(not == -1) {
      break;
    }
    else {
      toplamNot = toplamNot + not;
      ogrenciSayisi++;
    }
  }
  ortalama = toplamNot / ogrenciSayisi;
  printf("Not ortalamasi = %f", ortalama);
  return 0;
}
