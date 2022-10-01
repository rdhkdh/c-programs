#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[50];
    int roll;
    float percentage;
} Ross,Carl; //objects, you could even declare array of objects.

struct student* Daryn; //pointer object

void main()
{
    Daryn= (struct student*)malloc(sizeof(struct student)); //remember to allocate memory if you declare a pointer object.
    Ross.roll=2001;
    Carl.roll=2002;
    Daryn->roll=2003; //notice the difference in syntax
    printf("%d %d %d\n",Ross.roll,Carl.roll,Daryn->roll);
}