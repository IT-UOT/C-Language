#include <stdio.h>
#include <string.h>
#include <math.h>

/* 
  Pointers/4
  اكتب برنامج يطلب من المستخدم ادخال عناصر المصفوفة ومن ثم يقوم بطباعتهم وذلك باستخدام المؤشرات 
*/

int main() {
  int n = 10;
  int arr[n];
  int* ptr = arr;
  
  puts("Input elements: ");
  for(int i=0; i<n; i++) {
    scanf("%d", (ptr + i));
  }

  printf("Array elements: ");
  for(int i=0; i<n; i++) {
    printf("%d ", *(ptr + i));
  }
}
