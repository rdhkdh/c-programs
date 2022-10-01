#include<stdio.h>
int arrsum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {sum=sum+arr[i];}
    return sum;
}
int main()
{
    printf("type size, then array items:\n");
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++) { scanf("%d",&arr1[i]); }
    printf("sum of elements= %d\n",arrsum(arr1, n));
}
//its necessary to specify size, for scanning and sum purposes.