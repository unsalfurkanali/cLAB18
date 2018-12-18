#include <stdio.h>
#define BOYUT 10

int main(int argc, char const *argv[]) {
  int not[BOYUT];
  int i;
  for(i = 0; i < BOYUT; i++) {
    printf("%d . notu giriniz\n", i + 1);
    scanf("%d", &not[i]);
  }
  for(i = 0; i < BOYUT; i++) {
    printf("%d . eleman = %d\n", i + 1, not[i]);
  }
  return 0;
}
