#include<stdio.h>
//The ++ operator takes precedence over the * operator, and the () operators take precedence over everything else.
int main()
{
    int *p,i=5;
    p=&i;
    printf("%d\n",*p);
    printf("%p\n",p);
    printf("%p\n",&i); //line 7 and 8 give same o/p
    printf("%p\n",&p);
    printf("%d\n",*p+10);
    printf("%d\n",(*p)++); // no increment, as ++ is AFTER p.
    printf("%p\n",p++); //++ is after p, so no increment.
}