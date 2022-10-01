#include<stdio.h>

int main()
{
    FILE* fp;
    fp=fopen("test_file.txt","r");
    // fprintf(fp,"All the best! You can do it!\n");
    // fprintf(fp,"hello, how are you?");
    // char str[20];
    // fscanf(fp,"%s",&str);
    // printf("%s",str);
    char c;
    while(c!=EOF)
    {
        c= fgetc(fp);
        printf("%c",c);
    }
    fclose(fp);

}