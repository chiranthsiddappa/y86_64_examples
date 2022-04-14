#include <stdio.h>

static inline int callme12(int called) {
  called = called << 2;
  return called * 3;
}

int main(int argc, char *argv[]) {
  printf("Calling  12: %d\n", callme12(12));
  printf("Calling -12: %d\n", callme12(-12));
}
