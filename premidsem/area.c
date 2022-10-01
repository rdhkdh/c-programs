#include<stdio.h>
#define pi 3.14
int main()
{
    printf("enter length,breadth,radius: ");
    float l,b,r,unshaded;
    scanf("%f %f %f",&l,&b,&r);
    unshaded=(l*b)-2*(2*pi*r);
    printf("unshaded area= %.4f",unshaded);
}