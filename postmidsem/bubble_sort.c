#include<stdio.h>
#include<stdbool.h>
#define FALSE 0
#define TRUE 1

void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

//pass array and size:
void BubbleSort(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        bool swap_status= FALSE;
        for(int i=0;i<n-j-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i], &arr[i+1]);
                swap_status=TRUE;
            }
        }
        if(swap_status==FALSE) { break; }
    }
    
}

void main()
{
    int arr1[]={3,67,2,43,17,89,65,17};
    BubbleSort(arr1,8);
    for(int i=0;i<8;i++)
    { printf("%d ",arr1[i]); }
}