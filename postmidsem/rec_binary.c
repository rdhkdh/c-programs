#include<stdio.h>
int binary(int n)
{
    if(n==0) {return 0;} //base case.
    binary(n/2);
    printf("%d",n%2); //position of printf statement is important. If it is before binary func, then output no. is in reverse.
}
//here we want the top of the stack to reach x=1 first and print that. So recursive call comes first.
int main()
{
    int x;
    scanf("%d",&x);
    binary(x);
}