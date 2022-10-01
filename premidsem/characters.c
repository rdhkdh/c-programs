#include<stdio.h>
int main()
{
    char chr1='a';
    char chr2=98; //98 corresponds to ASCII code for b.
    printf("%c %c\n Enter a character: ",chr1,chr2);
    char c= getchar();
    printf("the character is: ");
    putchar(c);
}