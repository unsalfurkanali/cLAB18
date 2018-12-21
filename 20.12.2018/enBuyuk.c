#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i, sayi, max;
  printf("1.sayiyi giriniz: ");
  scanf("%d", &max);    //İlk sayı max kabul ediliyor.
  for(i = 0; i < 9; i++) {  //İlk sayıyı döngü dışında aldğımız için 9 sayılık bir döngü tanımladık
    printf("%d.sayiyi giriniz\n", i + 2);   //İlk sayıyı almıştık. ekranda ilk başta 2.sayı yazması için i + 2
    scanf("%d", &sayi);
    if(sayi > max) {
      max = sayi;   //Eğer girilen sayı max'tan büyükse yeni max girilen sayı olacak
    }
  }
  printf("Max = %d\n", max);
  return 0;
}
