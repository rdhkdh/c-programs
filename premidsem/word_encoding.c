#include<stdio.h>
int main()
{
    printf("enter five charcters:");
    char c1,c2,c3,c4,c5;
    scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);
    c1++;
    c2--;
    c3++;
    c4--;
    c5++;
    printf("%c%c%c%c%c",c1,c2,c3,c4,c5);
}