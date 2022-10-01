//iterative version of binary search
#include<stdio.h>

//returns index of reqd value
int BinarySearch(int arr[],int l,int r, int x)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==x) {return m;}
        else if(x>arr[m]) { l=m+1; }
        else { r=m-1; }
    }
    return -1;
}

int main()
{
    int myarray[]= {36,45,7,8,3,4,1,2};
    int index= BinarySearch(myarray,3,6,4); 
    printf("index of reqd term= %d\n",index);
}