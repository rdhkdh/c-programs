#include<stdio.h>

//pass array and size:
void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int y=arr[i];
        int j;
        for(j=i-1; j>=0 && arr[j]>y; j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=y; //j+1 used because after loop ends, j will be 1 less than the desired value.
    }
}

void main()
{
    int arr1[]={23,62,12,77,34,35,29,5};
    InsertionSort(arr1,8);
    for(int i=0;i<8;i++)
    { printf("%d ",arr1[i]); }
}