#include<stdio.h>

/**
    �� Demo ̽�����ǽ�������Ϊ�������ݵ������У�
    ʵ�ʷ�����ʲô��

    ������Ϊ��������������������ʵ���Ǵ���ָ�롣

    �������ֱ�﷽ʽ�ǵȼ۵ģ�

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
    ˵��������Ϊ�����������������ʵ���������ָ��
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
