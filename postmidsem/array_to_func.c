#include<stdio.h>
void func(int *p) 
{
   // *arr same as arr[0]. arr same as &arr[0]
    *p=*p+10;
    ++p;
    *p=*p+10;
}

int main()
{
    int arr[5]={9,2,3,6,7};
    func(&arr[3]);
    printf("%d %d\n",arr[3],arr[4]);
}
/*  alternate code

void func(int p[])
{
    p[0]=p[0]+10;
    p[1]=p[1]+10;
}

int main()
{
    int arr[5]={9,2,3,6,7};
    func(arr);
    printf("%d %d\n",arr[0],arr[1]);
}

*/
//in first approach, advantage is that you can assign pointer at any location in the array.