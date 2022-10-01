#include<stdio.h>
int main()
{
    char operator;
    printf("Enter operator(a,s,m,d,+,-,*,/): ");
    operator= getchar();
    int a,b;
    printf("Enter 2 integers:");
    scanf("%d %d",&a,&b);
    switch(operator)
    {
        case 'a':
        case '+':
        printf("%d",a+b); break;
        
        case 's':
        case '-':
        printf("%d",a-b); break;

        case 'm':
        case '*':
        printf("%d",a*b); break;

        case 'd':
        case '/':
        printf("%d",a/b); break;

    }

}