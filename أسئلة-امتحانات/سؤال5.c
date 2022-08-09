#include <stdio.h>
#include <string.h>

/* 
  اطبع الاتي
  STRING
  STRIN
  STRI
  STR
  ST
  S
*/

void main() {
  char str[] = "STRING";
  int n = strlen(str);
  for(int i=n; i>0; i--) {
    for(int j=0; j<i; j++) {
      printf("%c", str[j]);
    }
    puts("");
  }
}
