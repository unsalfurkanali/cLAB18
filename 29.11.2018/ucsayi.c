#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Uc tane sayi giriniz: ");
  scanf("%d %d %d", &a, &b, &c);
  if(a > b && a > c) {
    printf("%d en buyuktur", a);
    if(b > c) {
      printf("%d ortanca", b);
      printf("%d en kucuk", c);
    }
    else {
      printf("%d ortanca", c);
      printf("%d en kucuk", b);
    }
  }
  else if(b > a && b > c) {
    printf("%d en buyuktur", b);
    if(a > c) {
      printf("%d ortanca", a);
      printf("%d en kucuk", c);
    }
    else {
      printf("%d ortanca", c);
      printf("%d en kucuk", a);
    }
  }
  else {
    printf("%d en buyuktur", c);
    if(a > b) {
      printf("%d ortanca", a);
      printf("%d en kucuk", b);
    }
    else {
      printf("%d ortanca", b);
      printf("%d en kucuk", a);
    }
  }


  return 0;
}
