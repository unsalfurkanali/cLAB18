#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sayi, i = 2;
  printf("Bir sayi giriniz: ");
  scanf("%d", &sayi);
  while(1) {
    if(sayi % i == 0) {
      printf("Asal degil\n");
      break;
    }
    else {
      if(i == sayi - 1) {
        printf("Asaldir");
        break;
      }
      else {
        i++;
      }
    }
  }
  return 0;
}
