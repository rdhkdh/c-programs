#include<stdio.h>
int separate(int x)
{
    if(x==0) {return 0;}
    separate(x/10); //order of line 5 and 6 is very important. the o/p gets reversed otherwise. 
    printf("%d ",x%10); //for a no.167934, we first want 1 to go into the stack, and 4 last.
}
int main()
{
    int n;
    scanf("%d",&n);
    separate(n);
}