#include<stdio.h>
int main()
{
    int i=1;
    while(i<10)
    {
        printf("%d\n",i);
        i++;
    }
    int j=1;
    do { printf("%d ",j); j++; }
    while(j<10);
}