#include <stdio.h>

int main(void) {
  int a;
  printf("Bir sayi giriniz");
  scanf("%d", &a);
  if(a % 2 != 0) {
    printf("%d tektir", a);
  }
  else {
    printf("%d cifttir", a);
  }
  return 0;
}
