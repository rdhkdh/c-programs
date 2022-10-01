#include<stdio.h>
int main()
{
    int *p,**p1,***p2;
    int i=10;
    p=&i;
    p1=&p;
    p2=&p1;
    printf("%p\n",p);
    printf("%d\n",*p);

    printf("%p\n",p1);
    printf("%p\n",*p1);
    printf("%d\n",**p1);

    printf("%p\n",p2);
    printf("%p\n",*p2);
    printf("%p\n",**p2);
    printf("%d\n",***p2);
}
