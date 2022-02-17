#include <stdio.h>


void loop_label() {
  char i;
  for (i = 0; i < 5; i++) {
    printf("Loop #%d\n", i);
  }
}

int main() {
  loop_label();
  printf("All Done!");
  return 0;
}
