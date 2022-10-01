#include<stdio.h>
int main()
{
    int *p[5]; //array of pointers
    int arr1[3]={45,65,87};
    int arr2[4]={40,65,91,55};
    int arr3[2]={76,23};
    int arr4[3]={4,15,29};
    int arr5[1]={578};
    p[0]=&arr1[0];
    p[1]=&arr2[0];
    p[2]=&arr3[0];
    p[3]=&arr4[0];
    p[4]=&arr5[0];
    //for (int i=0;i<) {printf *(++p[0]);}
}