#include<stdio.h>
void swap(int *xp,int *yp)
{
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;
    
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("%d %d",x,y);
}