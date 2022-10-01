#include<stdio.h>

void my_strcpy(char *dest,const char *src) //destination and source strings
{
    int i=0;
    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0'; //i at the end of the loop will represent last index
}
int my_strlen(char *str)
{
    int n=0;
    while(*str!='\0')
    {
        n++;
        str++;
    }
    return n;
}
char my_strcat(char *dest,const char *src) //concatenate
{
    char *ptr= dest + my_strlen(dest);

    return *dest;
}

int main()
{
    char *str1="Welcome, Divergent rebels.";
    char *str2;
    my_strcpy(str2,str1);
    printf("%s\n",str2);
    //you can use array notation for pointers as well. Refer to stack-exchange link in onenote.
    printf("%d\n",my_strlen(str1));

}