#include<stdio.h>
int main()
{
    char *p="I am a string"; //pointer pointing to a string constant.
    char a[]="I am a string"; //array of characters.
    printf("%c\n",p[3]);
    printf("%c\n",a[3]);
    printf("%c\n",p[4]);
    printf("%c\n",a[4]);
    a[3]='t'; //allowed
    printf("%c\n",a[3]);
    int n= sizeof(a)/sizeof(char);
    for(int i=0;i<n;i++) {printf("%c",a[i]);}
    p[3]='t'; //string const, so no updation or modification allowed.
    printf("%c\n",p[3]);
    
}