#include <stdio.h>
#include <string.h>

/*
  أوجد مضروب العدد n باستخدام الدوال الفرعية
  مثال:
  5! = 5*4*3*2*1 = 120
*/

int fact(int n);

void main() {
  int n = 5;
  printf("%d ", fact(n));
}

int fact(int n) {
  int f = 1;
  for(int i=1; i<=n; i++) {
    f = f * i;
  }
  return f;
}
