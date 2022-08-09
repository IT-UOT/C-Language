#include <stdio.h>
#include <math.h>

/* 
  باستخدام الدوال اكتب برنامج يقوم بحساب المعادلة التالية
  b = 4.5(x+2.3y)^n / √(z+w)

  بحيث تقوم دالة حسب البسط بتمرير قيم x,y,n
  واعادة قيمة البسط إلى البرنامج الرئيسي

  ودالة حساب المقام تقوم باستدعاء دالة أخرى لقراءة قيم z,w
  المدخلة من المستخدم
  وإعادة قيمة المقام إلى البرنامج الرئيسي
*/

// متغيرات عامة تم تعريفها حتى يمكن استخدامها في دالة المقام بعد قرائتها من دالة القراءة
int z, w;

// دالة البسط
int numerator(int x, int y, int n);
// دالة المقام
int denominator();
// دالة القراءة
void read();

int main() {
  printf("numerator=%d\n", numerator(10,12,2));
  printf("denmonator=%d\n", denominator());
}

int numerator(int x, int y, int n) {
  int numer = 4.5 * pow((x + 2.3*y), n);
  return numer;
}

int denominator() {
  read();
  int denom = sqrt((z+w));
  return denom;
}

void read() {
  puts("Input z, w:");
  scanf("%d %d", &z, &w);
}
