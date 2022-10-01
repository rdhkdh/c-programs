#include<stdio.h>
#include<stdlib.h>

void main()
{
    //dynamically allocating memory and reading an integer array of unknown length.
    int n;
    printf("enter size of array: ");//if you don't want user to input size, then use realloc.
    scanf("%d",&n);
    int *arr;
    arr= (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) { scanf("%d",&arr[i]); }
    for(int i=0;i<n;i++) { printf("%d ",arr[i]); }
    printf("\n");
    
    //to take user input string, regardless of whether space is there or not.
    char str[20];
    fgets(str,20,stdin); //The 2nd parameter is the max size of string you'll allow.
    printf("%s\n",str);

    //dynamically allocating memory and reading string(char array) of unknown length.
    //uses realloc, refer to stackexchange
}
