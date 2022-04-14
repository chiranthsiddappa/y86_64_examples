#include <stdio.h>


int md_by_pow2(int num, short pow) {
  int i = 0;
  if (pow > 0) {
    for(; i < pow; i++) {
      num *= 2;
    }
  } else if (pow < 0) {
    for(; i > pow; i++) {
      num /= 2;
    }
  } else {
    num = num;
  }
  return num;
}

int main(int argc, char *argv[]) {
  short by3 = 3;
  by3 *= 3;
  printf("3by3: %d\n", by3);
  printf("3by3 pow 2: %d\n", md_by_pow2(by3, 4));
  return 0;
}
