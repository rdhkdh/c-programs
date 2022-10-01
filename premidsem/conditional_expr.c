#include<stdio.h>
int main()
{
    int x=5 ? 0:1 ; //conditional expression: if condition is true, then varible= expr1 else variable= expr2.
    printf("%d\n",x);
    int c,b;
    printf("enter 2 integers:");
    scanf("%d %d",&c,&b);
    int z=c>b ? c:b;//prints maximum of a,b
    printf("%d\n",z);
}