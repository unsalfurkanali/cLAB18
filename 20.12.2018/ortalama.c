#include <stdio.h>

int main(int argc, char const *argv[]) {
  int not, i;
  float ort = 0;
  for(i = 0; i < 10; i++) {
    printf("%d . Ogrenci notunu giriniz : ", i + 1);
    scanf("%d", &not);
    ort = ort + not;
  }
  ort = ort / 10;
  printf("Sinif not ortalamasi = %f\n", ort);
  return 0;
}
