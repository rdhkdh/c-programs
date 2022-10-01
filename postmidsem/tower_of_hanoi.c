#include<stdio.h>
//prints steps to solve tower of hanoi.
void TOH(int n, char s, char a, char d)
{
    if(n==1) {printf("move disc 1 from %c to %c\n",s,d); return;}   //base case
    TOH(n-1,s,d,a); //moving n-1 discs from source to aux
    printf("move disc %d from %c to %c\n",n,s,d); //moving last disk from source to destn.
    TOH(n-1,a,s,d); //moving n-1 discs from aux to destn.
}
int main()
{
    int n;
    printf("enter no. of discs in Tower of Hanoi:");
    scanf("%d",&n);
    TOH(n,'A','B','C');
}