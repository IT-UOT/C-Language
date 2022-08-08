  #include <stdio.h>
  #include <string.h>

  /* 
    Pointers/2
    أكتب برنامج يطلب ادخال رقمين من المستخدم ويجمعهم وذلك باستخدام المؤشرات
  */

  int main() {
    float num1, num2, sum;
    float *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    puts("Input Two Numbers:");
    scanf("%f %f", ptr1, ptr2);
    sum = *ptr1 + *ptr2;

    printf("Sum = %.2f\n", sum);
  }
