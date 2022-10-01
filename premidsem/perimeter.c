//cs101 lec6
#include<stdio.h> //#include, #define are called preprocessing directives or Macro.
float main()
{
    int l,b;
    printf("Enter integer length and breadth:");
    scanf("%d %d",&l,&b);
    int perimeter=2*(l+b);
    int area=l*b;
    printf("area=%d perimeter=%d\n",area,perimeter);
    const float pi=3.1415926; //const can be used to assign a name to a constant value.
    float r;
    printf("enter any positive real no. as radius:");
    scanf("%f",&r);
    float circumference=2*pi*r;
    printf("circumference=%f\n",circumference);
}