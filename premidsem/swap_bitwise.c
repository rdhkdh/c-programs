#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    x=x^y; //XOR gives 0 when both are same. A^0=A, A^A=0
    y=x^y;
    x=y^x;
    printf("%d %d",x,y);
}