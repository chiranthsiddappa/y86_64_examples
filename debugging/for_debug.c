#include <stdio.h>


int main() {
  char i;
  for (i = 0; i < 5; i++) {
  loop_label:
    printf("Loop #%d\n", i);
  }
  return 0;
}
