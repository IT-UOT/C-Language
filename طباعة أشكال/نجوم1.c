#include <stdio.h>
#include <string.h>

/* 
  اطبع الشكل الآتي
     *
    * *
   * * *
  * * * *
*/

void main() {
  int n = 5;
  int j = 0;
  for(int i=1; i<=n; i++) {
    for(int space=n; space>=i; space--) {
      printf(" ");
    }
    for(int j=1; j<=i; j++) {
      printf("* ");
    }
    puts("");
  }
}
