//factorial function
#include<stdio.h>
int fact(int n)
{
    if(n>1) {return n*fact(n-1);}
    else {return 1;}
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",fact(x));
}