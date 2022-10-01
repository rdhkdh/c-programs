#include<stdio.h>
struct HSS
{
    int sno;
    int rollno;
    char name[100];
    char courseid[6];
    char coursename[100];
};

int main()
{
    int n;
    char c;
    scanf("%d",&n);
    struct HSS record[n];
    for(int i=1;i<=n,i++)
    {
        scanf("%d",&record[i].sno);
        scanf("%d",&record[i].rollno);
        while(c!=',') 
        { 
            c= getchar(); 
            record[i].name = c;
        }
    }
    
}