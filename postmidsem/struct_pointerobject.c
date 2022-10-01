#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
    char name[30];
    int roll;
    float percentage;
};

void main()
{
    struct student Ares,Zeus,Poseidon;
    struct student* topper; //pointer to an object of the structure, declared
    
    strcpy(Zeus.name,"Zeus Thunder");
    Zeus.roll=12;
    Zeus.percentage=97.63;
    strcpy(Ares.name,"Ares War");
    Ares.roll=15;
    Ares.percentage=89.45;
    strcpy(Poseidon.name,"Poseidon Sea");
    Poseidon.roll=17;
    Poseidon.percentage=92.31;

    topper=&Zeus;
    printf("%4.2f\n",topper->percentage); //this actually means (*topper).percentage or Zeus.percentage
    printf("%s\n",topper->name);
    
}