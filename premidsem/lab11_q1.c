#include<stdio.h>
int main()
{
    FILE* fp;
    fp=fopen("lab11_input.txt","r");
    
    // int n;
    // fscanf(fp,"%d",&n);
    // //int n= getw(fp);
    // printf("n= %d\n",n);

    // char buffer[100];
    // while (fscanf(fp, "%[^\n]\n", buffer) !=EOF)
    // {
    //     printf("> %s\n", buffer);
    // }
    int sno;
    long long int roll;
    char name[20];
    char surname[30];
    char courseid[20];
    char coursename[100];
    
    fscanf(fp,"%d %lli %s %s,%s,%s[^\n]\n",&sno,&roll,&name,&surname,&courseid,&coursename);
    printf("%d %lli %s %s,%s",sno,roll,name,surname,courseid);
    printf("\n%s",surname);
    fclose(fp);
}