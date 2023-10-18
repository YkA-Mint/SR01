#include<stdio.h>

int main()
{
    int A=20,B =5;
    int C=!-- A /++!B;
    /*
    这个代码由于++只能用于变量，而！B是一个右值，导致无法编译通过
    按照理论分析的话，结果应该是(!(--A))/(++(!B))



    */
    printf (" A=% d B=% d c=% d \ n", A,B, C);
    return 0;
}
