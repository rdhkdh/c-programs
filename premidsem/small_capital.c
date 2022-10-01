#include<stdio.h>
int main()
{
    printf("enter a capital/small letter: ");
    char letter;
    letter=getchar();
    if (letter<=90 && letter>=65) //decimal ASCII code for A-Z
    {
        char small=letter+32;
        printf("small letter= %c",small);
    }
    if (letter<=122 && letter>=97) //decimal ASCII code for a-z
    {
        char capital=letter-32;
        printf("capital letter= %c",capital);
    }
}