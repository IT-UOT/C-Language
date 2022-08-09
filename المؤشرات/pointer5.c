#include <stdio.h>


/*
االسؤال:
قم بإنشاء مصفوفة من ثم قم بنسخها إلى مصفوفة اخرى باستخدام المؤشرات

*/

int main (void){

int arry1[5]= {1,2,3,4,5};
int arry2[5];

int *arry1Pointer = arry1;
int *arry2Pointer = arry2;
int *endPointer = &arry1[4];

while (arry1Pointer <= endPointer)
{
    *arry2Pointer  = *arry1Pointer;

arry1Pointer++;
arry2Pointer++;
}

printf("Array 1 : ");
for(int i = 0; i<5; i++){
    printf("%d, ", arry1[i]);
}

printf("\nArray 2 : ");
for(int i = 0; i<5; i++){
    printf("%d, ", arry2[i]);
}
printf("\n");


}

