#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sayi;
  puts("Bir sayi giriniz");
  scanf("%d", &sayi);
  if( sayi % 2 == 0) {
    puts("Bu sayi cifttir.");
  }
  else {
    puts("Bu sayi tektir");
  }
  return 0;
}
