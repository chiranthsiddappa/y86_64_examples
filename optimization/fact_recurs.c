#include <stdio.h>

//Represents the function n!
int factorial(int n) {
    int temp = 1; //set to a safe multiplicative value
    if (n <= 1) { //When you get to one, return
        return 1;
    } else {
        temp = n * factorial(n-1);
        return temp;
    }
}

int main(int argc, char *argv[]) {
  int f_start = 0;
  for (; f_start < 10; f_start++) {
    printf("factorial: %d\n", factorial(f_start));
  }
  return 0;
}
