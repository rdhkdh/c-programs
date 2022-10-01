#include<stdio.h>
struct date{
int date;
char month[10];
int year;
};
struct student
{
    char name[15];
    int rollno;
    struct date dob; //defining an object in struct 'date'.
};
int main()
{
    struct student s1= {"ruby",23,6,"April",2003}; //object declaration and initialization can be done this way too.
    printf("Year of birth is %d\n", s1.dob.year);
}