#include <stdio.h>

int main(void) {
  int a, b;
  printf("İki sayı giriniz: ");
  scanf("%d %d", &a, &b);
  if(a > b) {
    printf("%d, %d'den buyuktur", a, b);
  }
  else if(a < b) {
    printf("%d, %d'den buyuktur", b, a);
  }
  else {
    printf("%d = %d", a, b);
  }
  return 0;
}
