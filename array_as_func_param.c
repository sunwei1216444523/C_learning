#include<stdio.h>

/**
    本 Demo 探究的是将数组作为参数传递到函数中，
    实际发生了什么？

    数组作为参数传进函数参数表，其实就是传入指针。

    以下四种表达方式是等价的：

    int sum(int *ar, int n);
    int sum(int *, int);
    int sum(int ar[], int n);
    int sum(int[], int);
*/
void minmax(int a[], int len, int *max, int *min);

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,15,16,17,18,21,34,55};
    int min, max;
    printf("main sizeof(a) = %lu\n", sizeof(a));
    minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
    printf("min = %d, max = %d\n", min, max);

    return 0;
}

void minmax(int a[], int len, int *min, int *max)
{
    int i;
    /*
    warning: 'sizeof' on array function parameter 'a' will return size of 'int *'
    说明数组作为函数参数，传入的其实就是数组的指针
    */
    printf("minmax sizeof(a) = %lu\n", sizeof(a));
    *min = *max = a[0];
    for(i = 0; i < len; i++)
    {
        if( a[i] < *min){
            *min = a[i];
        }
        if(a[i] > *max){
            *max = a[i];
        }
    }
}
