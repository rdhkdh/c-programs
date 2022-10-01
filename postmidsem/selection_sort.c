#include<stdio.h>

void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

//pass array and its size:
void SelectionSort(int arr[],int n)
{
    for(int j=0;j<n-1;j++)
    {
        int index=0; //We assume 1st element is highest.
        for(int i=1;i<n-j;i++)
        {
            if(arr[i]>arr[index])
                index=i;
        }
        swap(&arr[index],&arr[n-j-1]);
    }
}

void main()
{
    int arr1[]={23,62,12,77,34,35,29,5};
    SelectionSort(arr1,8);
    for(int i=0;i<8;i++)
    { printf("%d ",arr1[i]); }
}