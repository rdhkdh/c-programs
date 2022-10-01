#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
    Beep(700,800); //freq=700Hz, time=800ms
    printf("Press any key to exit.\n");
    getch(); //holds the screen till user gives a character input.
    return 0;
}