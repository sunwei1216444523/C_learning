#include<stdio.h>

/**
    @return ��������ɹ�������1�����򷵻�0
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
    //���µ������������׷��Ĵ���ָ��һ��Ҫ���г�ʼ��֮��ſ���ʹ�á�
    //��������ָ��һ��δ֪������ֱ�Ӿͻ����egment fault(�δ���)
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
