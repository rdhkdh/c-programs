#include<stdio.h>
int main()
{
    int a,b,c;
   
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c) {printf("equilateral\n");}
    else if(a==b && a!=c) {printf("isosceles\n");}
    else if(a==c && a!=b) {printf("isosceles\n");}
    else if(b==c && a!=c) {printf("isosceles\n");}
    else {printf("scalene\n");}
}