#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 0;
  while(i > 10) {
    printf("while %d\n", i);
    i++;
  }
  i = 0;
  do {
    printf("dowhile %d\n", i);
    i++;
  }while(i > 10);
  return 0;
}
