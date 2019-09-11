#include<stdio.h>

/**
    @return 如果除法成功，返回1，否则返回0
*/
int divid(int a, int b, int *result);

int main(void)
{
    //=================demo1==============
    int a = 5;
    int b = 2;
    int c;
    if(divide(a, b, &c))
    {
        printf("%d / %d = %d\n", a, b, c);
    }

    //=================demo2=============
    //以下的做法是最容易犯的错误，指针一定要进行初始化之后才可以使用。
    //否则它将指向一块未知的区域，直接就会出现egment fault(段错误)
    //int* ptr;
    //*ptr = 100;
    //===================================
    return 0;
}

int divide(int x, int y, int* z)
{
    int ret = 1;
    if(y == 0) ret = 0;
    else
    {
        *z = x / y;
    }
    return ret;
}
