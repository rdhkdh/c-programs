//++ takes precedence over *. Also when ++ appears AFTER the pointer, then no increment is observed.
#include<stdio.h>
int main()
{

    static int x = 5;
    static int *p = &x;
    printf("( p   => %p\n", p);
    printf(" p++ => %p\n", p++);
    x = 5; p = &x;
    printf(" ++p => %p\n", ++p);
    x = 5; p = &x;
    printf("++*p      => %d\n",++*p);
    x = 5; p = &x;
    printf("++(*p)    => %d\n",++(*p));
    x = 5; p = &x;
    printf("++*(p)    => %d\n",++*(p));
    x = 5; p = &x;
    printf("*p++      => %d\n",*p++);
    x = 5; p = &x;
    printf("(*p)++    => %d\n",(*p)++);
    x = 5; p = &x;
    printf("*(p)++    => %d\n",*(p)++);
    x = 5; p = &x;
    printf("*++p      => %d\n",*++p); //increment address and then access value at that address ==> garbage.
    x = 5; p = &x;
    printf("*(++p)    => %d\n",*(++p));
    return 0;

}