#include <stdio.h>

/*

السؤال:
قم بإنشاء مصفوفمة ثم قم بعكسها وتخزينها في مصفوفة اخرى
باستخدام المؤشرات
*/

int main(void){

    int arry1[5] = {1,2,3,4,5};
    int arry2[5];

    int *array1Pointer = arry1;
    int *array2Pointer = arry2;

    int *lastPointer = &arry1[4];


    while ( lastPointer != array1Pointer) 
    {
        *array2Pointer = *lastPointer;

        lastPointer--;
        array2Pointer++;
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
