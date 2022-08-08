#include <stdio.h>
#include <string.h>
#include <math.h>

/* 
  السؤال:
  أكتب برنامج يقوم بإيجاد قيمة d
  d = √((P+R+A)^3 - T^3)
*/

int main() {
  float P, R, A, T, d;
  puts("Enter P, R, A, T");
  scanf("%f %f %f %f", &P, &R, &A, &T);
  d = sqrt(pow((P+R+T), 3) + pow(T, 3));
  printf("%f", d);
}
