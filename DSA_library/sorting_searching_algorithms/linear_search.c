#include<stdio.h>

//left, right indices, and the value to be searched.
int LinearSearch(int arr[],int l,int r,int x)
{
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==x) {return i;}
    }
    return -1;
}

int main()
{
    int arr1[]={3,43,6,79,33,21,10};
    int index= LinearSearch(arr1,0,5,79);
    printf("index of reqd term: %d\n",index);
}