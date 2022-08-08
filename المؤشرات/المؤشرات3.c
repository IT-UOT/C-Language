#include <stdio.h>
/*
السؤال:

قم بإنشاء متغيرين يحتويان على أرقام متعددة،
من ثم قم بإنشاء دالة تقوم  بتدبيل القيم باستخدمام القيم باستخدمام المؤشرات 

*/

void swap(int *x, int *y);

int main (void){
    int x = 3;
    int y = 7;
     printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);


}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
