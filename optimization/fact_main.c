#include <stdio.h>
#include "factorial.h"

int main(int argc, char *argv[]) {
  int f_start = 0;
  for (; f_start < 10; f_start++) {
    printf("factorial: %d\n", factorial(f_start));
  }
  return 0;
}
