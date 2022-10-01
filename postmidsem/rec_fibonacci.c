#include<stdio.h>
int fib(int n)
{
    if(n==1) {return 1;}
    else if(n==0) {return 0;}
    else {return fib(n-1)+fib(n-2);}
}
int main()
{
    int x;
    printf("enter no.of terms you want:");
    scanf("%d",&x);
    for(int i=0;i<=x-1;i++) { printf("%d ",fib(i)); }
//don't put print inside fib function
/*iterative approach for fib func is faster, as in recursion each tree is calculated separately*/
}