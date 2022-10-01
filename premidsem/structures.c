#include<stdio.h>
#include<string.h>

struct student{
        char name[50];
        int roll;
        int marks[2];
    };

int main()
{
    struct student Ross;
    struct student Carlos;
    struct student Wayn;

    strcpy(Ross.name, "Ross");
    Ross.roll=1002;
    Ross.marks[0]= 87;
    Ross.marks[1]= 96;

    strcpy(Carlos.name, "Carlos");
    Carlos.roll=1001;
    Carlos.marks[0]=88;
    Carlos.marks[1]=79;

    strcpy(Wayn.name, "Wayn"); //copies string2 to string1.
    Wayn.roll=1003;
    Wayn.marks[0]=55;
    Wayn.marks[1]=71;
    
    printf("Carlos: %s %d %d %d", Carlos.name, Carlos.roll, Carlos.marks[0],Carlos.marks[1]);

    char str1[]="proto";
    char str2[]="biogenesis";
    strcat(str1,str2); //concatenates strings
    printf("\n%s\n",str1);

    char colour[10];
    printf("enter a colour: ");
    scanf("%s", colour);
    printf("The colour is %s", colour);
}