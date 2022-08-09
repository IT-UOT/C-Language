#include <stdio.h>
#include <math.h>

/* 
  اكتب لإدخال عدد زوجي من لوحة المفاتيح
  بحيث تستمر عملية الادخال إذا كانت القيمة المدخلة فردية مع إعلام المستخدم بإدخال عدد زوجي كلما أدخل خلاف ذلك
*/

int main() {
  int num;
  while(1) {
    puts("Input an even number: ");
    scanf("%d", &num);
    if(num%2 == 0) break;
  }
  printf("You've entered an even number: %d\n", num);
}
