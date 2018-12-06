#include <stdio.h>

int main(void) {
  int aFreq = 0, bFreq = 0, cFreq = 0, fFreq = 0;
  char not;
  while(1) {
    puts("Not giriniz: ");
    scanf("%c", &not);
    if(not == 'm') break;
    else {
      switch (not) {
        case 'A': {
          aFreq++;
          break;
        }
        case 'B': {
          bFreq++;
          break;
        }
        case 'C': {
          cFreq++;
          break;
        }
        case 'F': {
          fFreq++;
          break;
        }
        default: {
          break;
        }
      }
    }
  }
  printf("A : %d\n", aFreq);
  printf("B : %d\n", bFreq);
  printf("C : %d\n", cFreq);
  printf("F : %d\n", fFreq);
  return 0;
}
