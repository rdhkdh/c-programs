#include<stdio.h>
#define pi 3.14159
#define g 9.81 //these are macro or preprocessing directives.
#define name "iit guwahati"
float main()
{
    printf(name "\n");
    float r;
    printf("enter any positive real no. as radius:");
    scanf("%f",&r);
    float circumference=2*pi*r;
    printf("circumference=%f\n",circumference);
    float m;
    printf("enter value of mass:");
    scanf("%f",&m);
    float weight= m*g;
    printf("weight on earth=%f\n",weight);
}