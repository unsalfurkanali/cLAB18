#include <stdio.h>

int main(void) {
  int sayi, i;
  printf("Bir sayi giriniz\n\n");
  scanf("%d", &i);
  printf("Sayi\t\tKare\t\tKup\n");
  sayi = 0;
  while(i >= 0) {
    printf("%d\t\t%d\t\t%d\n", sayi, sayi*sayi, sayi*sayi*sayi);
    i--;
    sayi++;
  }
  return 0;
}
