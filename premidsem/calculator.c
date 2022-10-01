#include<stdio.h>
int main()
{
    float a,b,y;
    char operation;
    printf("Enter operation to be performed:");
    scanf("%c",&operation);
    printf("Enter 2 real nos:");
    scanf("%.2f %.2f",&a,&b);
   


    switch(operation)
    {
        case '+':
            y=a+b;
            printf("%.2f\n",y);
            break;

        case '-':
            y=a-b;
            printf("%.2f\n",y);
            break;

        case '*':
            y=a*b;
            printf("%.2f\n",y);
            break;

        case '/':
            y=a/b;
            printf("%.2f\n",y);
            break;
    }
    return 0;
}