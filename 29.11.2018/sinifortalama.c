#include <stdio.h>

int main(void) {
  int not, toplam = 0, i = 0;
  float ortalama = 0;
  while(i < 10) {
    printf("Not giriniz");
    scanf("%d", &not);
    toplam = toplam + not;
    ortalama = toplam / 10;
    i++; // i = i + 1
  }
  printf("\n\nSinif not ortalamasi %f dir\n", ortalama);
  return 0;
}
