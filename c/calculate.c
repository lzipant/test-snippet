#include "calculate.h"

int add_two_integers(int a, int b) {
  int result = a + b;
  // 打印两个整数的求和过程
  printf("%d + %d = %d\n", a, b, result);
  return result;
}

int subtract_two_integers(int a, int b) {
  // 打印两个整数的求差过程
  return a - b;
}

int multiply_two_integers(int a, int b) {
  return a * b;
}

// SNIPPET_START divide_two_integers
int divide_two_integers(int a, int b) {
  return a / b;
}
// SNIPPET_END divide_two_integers
