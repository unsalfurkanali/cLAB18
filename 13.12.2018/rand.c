#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int i, zarYuzu, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0;
  srand(time(NULL));
  for(i = 0; i < 6000; i++) {
    zarYuzu = rand() % 6 + 1;
    if(zarYuzu == 1) freq1++;
    else if(zarYuzu == 2) freq2++;
    else if(zarYuzu == 3) freq3++;
    else if(zarYuzu == 4) freq4++;
    else if(zarYuzu == 5) freq5++;
    else if(zarYuzu == 6) freq6++;
  }
  printf("Zar Yuzu \t Frekans\n");
  printf("1\t %d\n", freq1);
  printf("2\t %d\n", freq2);
  printf("3\t %d\n", freq3);
  printf("4\t %d\n", freq4);
  printf("5\t %d\n", freq5);
  printf("6\t %d\n", freq6);

  return 0;
}
