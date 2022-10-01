#include<stdio.h>
int main()
{
    int j=200;
    if(j=5) { printf("a"); } //if j=0, then output=b. Here output=a, because we're assigning not comparing. If j==5, then output=b.
    else { printf("b"); }
}